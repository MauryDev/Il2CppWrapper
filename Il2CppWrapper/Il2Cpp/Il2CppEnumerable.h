#pragma once
#include "Il2CppWrapper.h"
#include <iterator>
#include <functional>

namespace Il2CppWrapper {

	/**
	 * @brief Wrapper para System.Collections.IEnumerator.
	 * Representa um enumerador que permite iterar sobre elementos de uma coleção.
	 */
	struct IEnumerator : Object {
		/**
		 * @brief Obtém o elemento atual da enumeração.
		 * @return Ponteiro para o objeto atual
		 */
		Object* GetCurrent();

		/**
		 * @brief Avança para o próximo elemento.
		 * @return true se há próximo elemento, false caso contrário ou fim da coleção
		 */
		bool MoveNext();

		/**
		 * @brief Reinicia a enumeração para o início.
		 */
		void Reset();

		
		
		
	};

	/**
	 * @brief Enumerador genérico tipado para coleções IL2CPP.
	 * Fornece iteração type-safe sobre elementos de tipo T.
	 */
	template <typename T>
	struct IEnumeratorTyped : IEnumerator {
		/**
		 * @brief Obtém o elemento atual já convertido para o tipo T.
		 * @return Valor do tipo T
		 */
		T GetCurrentTyped() {
			Object* current = GetCurrent();
			if (current == nullptr) return T{};
			return current->Unbox<T>();
		}
	};

	/**
	 * @brief Wrapper para System.Collections.IEnumerable.
	 * Permite iterar sobre coleções que implementam IEnumerable.
	 */
	struct IEnumerable : Object {
		/**
		 * @brief Obtém um enumerador para iterar sobre os elementos.
		 * @return Ponteiro para um IEnumerator
		 */
		IEnumerator* GetEnumerator();

		/**
		 * @brief Iterador STL-compatível para range-based loops.
		 * Permite usar: for (auto item : enumerable) { ... }
		 */
		struct Iterator {
			IEnumerator* _enumerator;
			Object* _current;
			bool _started;

			Iterator(IEnumerator* enumerator = nullptr, bool start = false);

			// Operador pré-incremento
			Iterator& operator++();

			// Operador pós-incremento
			Iterator operator++(int);

			// Desreferenciação
			Object* operator*() const;

			Object* operator->() const;

			// Comparação de igualdade
			bool operator==(const Iterator& other) const;

			// Comparação de desigualdade
			bool operator!=(const Iterator& other) const;
		};

		// Begin para range-based loop
		Iterator begin();

		// End para range-based loop
		Iterator end();

		/**
		 * @brief Converte a coleção para um std::vector.
		 * Útil para processar todos os elementos de uma vez.
		 * @return Vector contendo todos os elementos
		 */
		std::vector<Object*> ToVector();

		/**
		 * @brief Conta quantos elementos estão na coleção.
		 * @return Número de elementos
		 */
		uint32_t Count();

		/**
		 * @brief Itera sobre todos os elementos aplicando uma função callback.
		 * @param callback Função que receberá cada elemento
		 */
		template <typename F>
		void ForEach(F&& callback) {
			auto enumerator = GetEnumerator();
			if (!enumerator) return;

			while (enumerator->MoveNext()) {
				callback(enumerator->GetCurrent());
			}
			enumerator->Reset();
		}

		/**
		 * @brief Versão genérica tipada do ForEach para coleções IEnumerable<T>.
		 * @param callback Função que receberá cada elemento como T
		 */
		template <typename T, typename F>
		void ForEachTyped(F&& callback) {
			auto enumerator = GetEnumerator();
			if (!enumerator) return;

			while (enumerator->MoveNext()) {
				Object* current = enumerator->GetCurrent();
				if (current) {
					callback(current->Unbox<T>());
				}
			}
			enumerator->Reset();
		}

		/**
		 * @brief Filtra elementos da coleção com base em um predicado.
		 * @param predicate Função que retorna true para elementos que devem ser inclusos
		 * @return Vector com elementos filtrados
		 */
		template <typename F>
		std::vector<Object*> Where(F&& predicate) {
			std::vector<Object*> result;
			auto enumerator = GetEnumerator();
			if (!enumerator) return result;

			while (enumerator->MoveNext()) {
				Object* current = enumerator->GetCurrent();
				if (current && predicate(current)) {
					result.push_back(current);
				}
			}
			enumerator->Reset();
			return result;
		}

		/**
		 * @brief Transforma elementos da coleção usando uma função mapeadora.
		 * @param mapper Função que transforma cada Object em um novo Object
		 * @return Vector com elementos mapeados
		 */
		std::vector<Object*> Select(std::function<Object*(Object*)> mapper);

		/**
		 * @brief Verifica se algum elemento atende ao predicado.
		 * @param predicate Função de teste
		 * @return true se algum elemento atender
		 */
		template <typename F>
		bool Any(F&& predicate) {
			auto enumerator = GetEnumerator();
			if (!enumerator) return false;

			while (enumerator->MoveNext()) {
				Object* current = enumerator->GetCurrent();
				if (current && predicate(current)) {
					enumerator->Reset();
					return true;
				}
			}
			enumerator->Reset();
			return false;
		}

		/**
		 * @brief Verifica se todos os elementos atendem ao predicado.
		 * @param predicate Função de teste
		 * @return true se todos atenderem
		 */
		template <typename F>
		bool All(F&& predicate) {
			auto enumerator = GetEnumerator();
			if (!enumerator) return true;

			while (enumerator->MoveNext()) {
				Object* current = enumerator->GetCurrent();
				if (!current || !predicate(current)) {
					enumerator->Reset();
					return false;
				}
			}
			enumerator->Reset();
			return true;
		}

		/**
		 * @brief Encontra o primeiro elemento que atende ao predicado.
		 * @param predicate Função de teste
		 * @return Object encontrado ou nullptr
		 */
		template <typename F>
		Object* FirstOrDefault(F&& predicate) {
			auto enumerator = GetEnumerator();
			if (!enumerator) return nullptr;

			while (enumerator->MoveNext()) {
				Object* current = enumerator->GetCurrent();
				if (current && predicate(current)) {
					enumerator->Reset();
					return current;
				}
			}
			enumerator->Reset();
			return nullptr;
		}

		/**
		 * @brief Obtém o primeiro elemento.
		 * @return Primeiro elemento ou nullptr se vazio
		 */
		Object* First();

		/**
		 * @brief Obtém o último elemento.
		 * @return Último elemento ou nullptr se vazio
		 */
		Object* Last();
	};

	/**
	 * @brief Enumerável genérico tipado para coleções IL2CPP.
	 * Fornece iteração type-safe sobre elementos de tipo T.
	 */
	template <typename T>
	struct IEnumerableTyped : IEnumerable {
		/**
		 * @brief Obtém um enumerador tipado para este coleção.
		 * @return IEnumeratorTyped<T>
		 */
		IEnumeratorTyped<T>* GetEnumeratorTyped() {
			return (IEnumeratorTyped<T>*)GetEnumerator();
		}

		/**
		 * @brief Iterador STL-compatível tipado para range-based loops.
		 */
		struct TypedIterator {
			IEnumeratorTyped<T>* _enumerator;
			T _current;
			bool _started;

			TypedIterator(IEnumeratorTyped<T>* enumerator = nullptr, bool start = false)
				: _enumerator(enumerator), _current(T{}), _started(false) {
				if (start && _enumerator) {
					if (_enumerator->MoveNext()) {
						_current = _enumerator->GetCurrentTyped();
						_started = true;
					}
				}
			}

			TypedIterator& operator++() {
				if (_enumerator && _enumerator->MoveNext()) {
					_current = _enumerator->GetCurrentTyped();
				}
				else {
					_enumerator = nullptr;
					_current = T{};
				}
				return *this;
			}

			TypedIterator operator++(int) {
				TypedIterator temp = *this;
				++(*this);
				return temp;
			}

			T operator*() const {
				return _current;
			}

			bool operator==(const TypedIterator& other) const {
				return _enumerator == other._enumerator;
			}

			bool operator!=(const TypedIterator& other) const {
				return !(*this == other);
			}
		};

		// Begin/End para range-based loop tipado
		TypedIterator begin() {
			auto enumerator = GetEnumeratorTyped();
			if (!enumerator) return TypedIterator(nullptr, false);
			return TypedIterator(enumerator, true);
		}

		TypedIterator end() {
			return TypedIterator(nullptr, false);
		}

		/**
		 * @brief Converte a coleção tipada para std::vector<T>.
		 * @return Vector com todos os elementos tipados
		 */
		std::vector<T> ToVectorTyped() {
			std::vector<T> result;
			auto enumerator = GetEnumeratorTyped();
			if (!enumerator) return result;

			while (enumerator->MoveNext()) {
				result.push_back(enumerator->GetCurrentTyped());
			}
			enumerator->Reset();
			return result;
		}

		/**
		 * @brief Itera sobre elementos tipados.
		 * @param callback Função que recebe T
		 */
		template <typename F>
		void ForEach(F&& callback) {
			auto enumerator = GetEnumeratorTyped();
			if (!enumerator) return;

			while (enumerator->MoveNext()) {
				callback(enumerator->GetCurrentTyped());
			}
			enumerator->Reset();
		}
	};

}