# Il2CppWrapper

Um wrapper C++ moderno e type-safe para interoperar com código C# através da API **Il2Cpp** do Unity. Esta biblioteca fornece uma interface amigável para acessar reflexão, invocar métodos, gerenciar memória e manipular objetos gerenciados do .NET.

## 🎯 Características Principais

- **Wrapper Type-Safe**: Interface C++ moderna para acesso à API Il2Cpp
- **Reflexão Completa**: Inspeção de classes, métodos, campos, propriedades e eventos
- **Invocação Dinâmica**: Chamada de métodos C# a partir de C++
- **Gerenciamento de Memória**: Suporte a GC, arrays, strings e alocação gerenciada
- **Threading**: Suporte para multi-threading, thread attachment e stack traces
- **Debugging**: Integração com debugger, breakpoints e informações de depuração
- **Atributos Customizados**: Leitura e manipulação de Custom Attributes
- **Boxing/Unboxing**: Conversão automática entre tipos primitivos e objetos
- **GCHandles**: Gerenciamento de referências para objetos gerenciados
- **Interop Natives**: Registro de funções C++ como InternalCall

## 📋 Requisitos

- Visual Studio 2022+
- C++17 ou superior
- Il2Cpp Runtime (incluso no Unity)
- Windows, Linux ou macOS

## 🚀 Quick Start

### Inicialização Básica

```cpp
#include "Il2CppWrapper.h"
using namespace Il2CppWrapper;

Program::Init("AppDomain");
Domain* domain = Domain::Get();
```

### Invocar um Método

```cpp
Class* klass = Domain::Get()->LookUpClass("UnityEngine", "Debug");
const Method* logMethod = klass->GetMethodFromName("Log", 1);
Exception* exc = nullptr;
String* msg = String::New("Hello!");
void* args[] = { msg };
Runtime::Invoke(logMethod, nullptr, args, &exc);
```

### Trabalhar com Arrays

```cpp
Class* intClass = Domain::Get()->LookUpClass("System", "Int32");
Array* arr = Array::New(intClass, 10);
arr->SetAt<int>(0, 42);
```

### Reflexão

```cpp
Class::ForEach([](Class* klass) {
    printf("Class: %s.%s\n", klass->GetNamespace(), klass->GetName());
});
```

## 📚 Estrutura da API

- **Core**: `Pointer`, `Object`, `Class`, `Method`, `Field`, `Property`
- **Memory**: `Domain`, `Array`, `String`, `GC`, `GCHandle`
- **Threading**: `Thread`, `StackTrace`, `Monitor`
- **Debugging**: `Debugger`, `CustomAttribute`
- **Runtime**: `Runtime`, `Exception`, `Program`

## 📝 Licença

MIT License

---
