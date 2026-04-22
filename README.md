
# Il2CppWrapper

A modern and type-safe C++ wrapper for interoperating with C# code through the **Il2Cpp** API of Unity. This library provides a friendly interface for accessing reflection, invoking methods, managing memory, and manipulating managed .NET objects.

## 🎯 Key Features

- **Type-Safe Wrapper**: Modern C++ interface for Il2Cpp API access
- **Complete Reflection**: Inspection of classes, methods, fields, properties, and events
- **Dynamic Invocation**: Calling C# methods from C++
- **Memory Management**: Support for GC, arrays, strings, and managed allocation
- **Threading**: Support for multi-threading, thread attachment, and stack traces
- **Debugging**: Integration with debugger, breakpoints, and debug information
- **Custom Attributes**: Reading and manipulating Custom Attributes
- **Boxing/Unboxing**: Automatic conversion between primitive types and objects
- **GCHandles**: Management of references to managed objects
- **Native Interop**: Registration of C++ functions as InternalCall

## 📋 Requirements

- Visual Studio 2022+
- C++17 or higher
- Il2Cpp Runtime (included in Unity)
- Windows, Linux, or macOS

## 🚀 Quick Start

### Basic Initialization

```cpp
#include "Il2CppWrapper.h"
using namespace Il2CppWrapper;

Program::Init("AppDomain");
Domain* domain = Domain::Get();
```

### Invoking a Method

```cpp
Class* klass = Domain::Get()->LookUpClass("UnityEngine", "Debug");
const Method* logMethod = klass->GetMethodFromName("Log", 1);
Exception* exc = nullptr;
String* msg = String::New("Hello!");
void* args[] = { msg };
Runtime::Invoke(logMethod, nullptr, args, &exc);
```

### Working with Arrays

```cpp
Class* intClass = Domain::Get()->LookUpClass("System", "Int32");
Array* arr = Array::New(intClass, 10);
arr->SetAt<int>(0, 42);
```

### Reflection

```cpp
Class::ForEach([](Class* klass) {
    printf("Class: %s.%s\n", klass->GetNamespace(), klass->GetName());
});
```

## 📚 API Structure

- **Core**: `Pointer`, `Object`, `Class`, `Method`, `Field`, `Property`
- **Memory**: `Domain`, `Array`, `String`, `GC`, `GCHandle`
- **Threading**: `Thread`, `StackTrace`, `Monitor`
- **Debugging**: `Debugger`, `CustomAttribute`
- **Runtime**: `Runtime`, `Exception`, `Program`

## 📝 License

MIT License

