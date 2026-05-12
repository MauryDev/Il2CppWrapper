#pragma once
#include "Il2CppWrapper.h"
#include <functional>
#include <vector>

namespace Il2CppWrapper {

	/**
	 * @brief Encapsula um System.Delegate de forma idiomática em C++.

	 * ```
	 */
	struct Delegate : Object {
		
		static Delegate* Create(Type* klassDelegate, Method* method, Object* target);

		/**
		 * @brief Cria um delegate a partir de um método estático.
		 * @param method Método estático a ser encapsulado
		 * @return Novo delegate, ou nullptr se falhar
		 */
		static Delegate* CreateStatic(Type* klassDelegate, Method* method);

		/**
		 * @brief Cria um delegate a partir de uma função nativa C++.
		 * 
		 * A função deve ter assinatura compatível com o delegate esperado.
		 * O delegate resultante executará a função nativa.
		 * 
		 * @param funcPtr Ponteiro para função C++ estática
		 * @return Novo delegate, ou nullptr se falhar
		 * 
		 * @note Esta função requer suporte especial do runtime IL2CPP.
		 * Nem todas as versões suportam native callbacks.
		 */
		static Delegate* FromFunction(Type* klassDelegate, void* funcPtr);

		/**
		 * @brief Helper template para criar um delegate a partir de uma função C++.
		 *
		 * @tparam Func Tipo do ponteiro de função
		 * @param klassDelegate Tipo do delegate no IL2CPP
		 * @param func A função C++ a ser encapsulada
		 * @return Novo delegate, ou nullptr se falhar
		 */
		template <typename Func>
		static Delegate* FromFunction(Type* klassDelegate, Func func) {
			return FromFunction(klassDelegate, reinterpret_cast<void*>(func));
		}

		/**
		 * @brief Invoca o delegate dinamicamente com parâmetros variádicos.
		 * 
		 * Usa span<Pointer*> para passar argumentos de forma dinâmica,
		 * sem necessidade de conhecer os tipos em tempo de compilação.
		 * 
		 * @param args Array de Pointer* representando os argumentos
		 * @return Resultado da invocação como Object*, ou nullptr para void
		 * @throws std::runtime_error se ocorrer exceção no IL2CPP
		 * 
		 * Exemplo:
		 * ```cpp
		 * Pointer* args[] = { Pointer::ToPointer(42) };
		 * Object* result = del->Invoke(std::span(args));
		 * ```
		 */
		Object* Invoke(std::span<Pointer*> args = {});

	

		/**
		 * @brief Invoca o delegate com type-safety em compile-time.
		 * 
		 * Usa templates e fold expressions para empacotar argumentos
		 * de forma type-safe, com verificação de parâmetros automática.
		 * 
		 * @tparam TRet Tipo de retorno esperado
		 * @tparam Args Tipos dos argumentos
		 * @param args Argumentos variádicos
		 * @return Resultado convertido para TRet
		 * @throws std::runtime_error se tipos não corresponderem ou erro no IL2CPP
		 * 
		 * Exemplo:
		 * ```cpp
		 * // Action<int>
		 * del->Invoke<void, int>(42);
		 * 
		 * // Func<int, string>
		 * auto result = del->Invoke<String*, int>(42);
		 * ```
		 */
		template <typename TRet = void, typename... Args>
		TRet Invoke(Args&&... args) {
			constexpr std::size_t numArgs = sizeof...(Args);

			Exception* exc = nullptr;

			if constexpr (numArgs > 0) {
				std::array<Pointer*, numArgs> params;
				std::size_t i = 0;
				((params[i++] = Pointer::ToPointer(std::forward<Args>(args))), ...);

				Object* result = Invoke(std::span(params.data(), numArgs));

				if (exc != nullptr) {
					std::string errorMsg = exc->getMessage();
					throw std::runtime_error("Delegate invocation error: " + errorMsg);
				}

				if constexpr (!std::is_void_v<TRet>) {
					return result->get<TRet>();
				}
			}
			else {
				Object* result = Invoke();

				if (exc != nullptr) {
					std::string errorMsg = exc->getMessage();
					throw std::runtime_error("Delegate invocation error: " + errorMsg);
				}

				if constexpr (!std::is_void_v<TRet>) {
					return result->get<TRet>();
				}
			}
		}

		/**
		 * @brief Verifica se este é um MulticastDelegate (múltiplos handlers).
		 * @return true se múltiplos handlers, false se single-cast
		 */
		bool IsMulticast();

		/**
		 * @brief Retorna a invocation list (lista de handlers).
		 * 
		 * Para MulticastDelegate, retorna todos os handlers encapsulados.
		 * Para single-cast, retorna array com um único elemento.
		 * 
		 * @return Vector de Delegate* representando cada handler
		 */
		std::vector<Delegate*> GetInvocationList();

		/**
		 * @brief Retorna o método encapsulado.
		 * @return Method* do delegate
		 */
		Method* GetMethod();

		/**
		 * @brief Retorna a instância do objeto alvo (para métodos de instância).
		 * @return Object* alvo, ou nullptr para métodos estáticos
		 */
		Object* GetTarget();

		/**
		 * @brief Retorna o tipo Invoke assinado para este delegate.
		 * @return Class* do tipo genérico do delegate (ex: Action<int, string>)
		 */
		Class* GetDelegateType();

		/**
		 * @brief Compara igualdade com outro delegate.
		 * 
		 * Dois delegates são iguais se:
		 * - Encapsulam o mesmo método
		 * - Têm o mesmo alvo (para métodos de instância)
		 * 
		 * @param other Delegate a comparar
		 * @return true se iguais
		 */
		bool Equals(Delegate* other);

		/**
		 * @brief Combina com outro delegate (equivalente a +=).
		 * 
		 * Cria um novo MulticastDelegate com ambos os handlers.
		 * 
		 * @param other Delegate a combinar
		 * @return Novo MulticastDelegate com ambos, ou nullptr se falhar
		 * 
		 * @note O delegate original não é modificado.
		 */
		Delegate* Combine(Delegate* other);

		/**
		 * @brief Remove um handler da invocation list (equivalente a -=).
		 * 
		 * Remove a primeira ocorrência do handler especificado.
		 * 
		 * @param other Delegate a remover
		 * @return Novo delegate sem o handler, ou nullptr se nenhum restante
		 * 
		 * @note O delegate original não é modificado.
		 */
		Delegate* Remove(Delegate* other);

		// ========== UTILITIES ==========

		/**
		 * @brief Helper para obter o nome completo do delegate.
		 * @return string com namespace.delegateType::method
		 */
		std::string GetFullName();

		/**
		 * @brief Verifica se o delegate é estático.
		 * @return true se encapsula método estático
		 */
		bool IsStatic();

		/**
		 * @brief Verifica se o delegate é anulável (nullptr).
		 * @return true se é null
		 */
		bool IsNull();
	};

	
	

	/**
	 * @brief Factory para criar delegates type-safe.
	 * 
	 * Exemplo:
	 * ```cpp
	 * DelegateFactory<void, int> factory;
	 * auto del = factory.Create(method, obj);
	 * del->Invoke(42);
	 * ```
	 * 
	 * @tparam TRet Tipo de retorno
	 * @tparam Args Tipos dos argumentos
	 */
	template <typename TRet = void, typename... Args>
	struct DelegateFactory : Delegate {
		
		

		/**
		 * @brief Invoca o delegate com type-safety.
		 */
		TRet Invoke(Delegate* del, Args&&... args) {
			if (!del) return TRet{};
			return del->Invoke<TRet>(std::forward<Args>(args)...);
		}
	};

	

}