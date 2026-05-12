
# Il2CppWrapper

A modern and type-safe C++ wrapper for interoperating with C# code through the **Il2Cpp** API of Unity. This library provides a comprehensive interface for accessing reflection, invoking methods, managing memory, handling delegates, and manipulating managed .NET objects with advanced features for professional game development.

## 🎯 Key Features

### Core Functionality
- **Type-Safe Wrapper**: Modern C++ interface leveraging C++17 features for Il2Cpp API access
- **Complete Reflection**: Comprehensive inspection of classes, methods, fields, properties, events, and custom attributes
- **Dynamic Invocation**: Calling C# methods from C++ with both dynamic and compile-time type-safe approaches
- **Memory Management**: Advanced support for GC, arrays, strings, and managed allocation with automatic cleanup

### Advanced Features
- **Delegate Support**: Full delegate handling with type-safe template invocation
  - Create delegates from managed methods
  - Create delegates from native C++ functions
  - Support for both Action and Func delegates
  - Type-safe variadic invocation with compile-time parameter checking

- **Boxing/Unboxing**: Seamless conversion between primitive types and objects
  - Automatic boxing of value types
  - Safe unboxing with type validation
  - Support for custom structs

- **GCHandles**: Management of strong and weak references to managed objects
  - Create strong and weak references
  - Automatic handle lifecycle management
  - Foreach enumeration of GC-reachable objects

- **Native Interop**: Registration of C++ functions as InternalCall
  - Register native callbacks for C# delegates
  - Support for function pointers and native callbacks
  - Seamless C++/C# interoperability

### Reflection & Metadata
- **Advanced Method Search**: Multiple ways to find methods
  - By name and parameter count
  - By name and parameter types
  - Using custom predicates
  - With full signature matching

- **Field & Property Access**: Direct access to managed fields and properties
  - Read/write field values from native code
  - Property getters and setters
  - Static and instance members

- **Custom Attributes**: Reading and analyzing custom attributes on types and members
  - Inspect attribute data
  - Retrieve attribute constructor arguments
  - Access attribute named properties

### Memory & Performance
- **Array Operations**: 
  - Type-safe array access with templates
  - Span integration for modern C++ patterns
  - Vector conversion utilities
  - Array search and contains operations

- **String Handling**: Full Unicode string support
  - Create and manipulate managed strings
  - Native interop with wchar_t/char16_t
  - String encoding support

- **GC Control**: Fine-grained garbage collection management
  - Manual collection triggers
  - GC mode configuration (Incr/Full)
  - External allocation tracking
  - Write-barrier management

### Threading & Debugging
- **Multi-threading Support**: 
  - Thread attachment and detachment
  - Stack trace generation
  - Native stack traces with symbol resolution
  - Monitor/lock support

- **Debugging Integration**: 
  - Debugger communication
  - Breakpoint support
  - Exception handling with native stack traces
  - Debug information access

### Code Generation
- **Metadata-Driven Code Generation**: Automatic C++ class generation from IL2CPP metadata
  - Generate type-safe C++ bindings from managed types
  - Automatic method and field generation
  - Support for complex type hierarchies

## 📋 Requirements

- Visual Studio 2022+ (or any C++17 compatible compiler)
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

### Working with Delegates

```cpp
// Get the delegate type
Class* actionClass = Domain::Get()->LookUpClass("System", "Action`1");
Type* actionIntType = /* Get Action<int> type */;

// Create a delegate from a managed method
Method* targetMethod = /* ... */;
Delegate* del = Delegate::Create(actionIntType, targetMethod, nullptr);

// Invoke with type-safe parameters
del->Invoke<void, int>(42);

// Create from native function
void NativeCallback(int value) { /* ... */ }
Delegate* nativeDel = Delegate::FromFunction(actionIntType, NativeCallback);
```

### Working with Arrays

```cpp
Class* intClass = Domain::Get()->LookUpClass("System", "Int32");
Array* arr = Array::New(intClass, 10);
arr->SetAt<int>(0, 42);

// Modern C++ integration with std::span
auto span = arr->AsSpan<int>();
for (auto val : span) {
    std::cout << val << std::endl;
}

// Or convert to std::vector
auto vec = arr->ToVector<int>();
```

### Advanced Reflection with Type-Safe Search

```cpp
Class* mathClass = Domain::Get()->LookUpClass("System", "Math");

// Search by name and parameter types
Method* absMethod = mathClass->GetMethodByNameAndTypes(
    "Abs", 
    1, 
    std::array<const char*, 1>{"System.Double"}
);

// Search with predicate
Method* customMethod = mathClass->GetMethodByPredicate([](Method* m) {
    return std::string(m->GetName()).find("Static") != std::string::npos;
});
```

### Boxing and Unboxing

```cpp
// Boxing: Convert primitive to managed object
Class* intClass = Domain::Get()->LookUpClass("System", "Int32");
Object* boxedInt = Object::Box(intClass, 42);

// Unboxing: Extract value from object
int value = boxedInt->Unbox<int>();
```

### Working with Strings

```cpp
// Create a managed string
String* str = String::New("Hello, IL2CPP!");

// Convert to native format
std::string nativeStr = String::New(str);

// Create from native string
String* str2 = String::ToStdString("Native String");
```

### Exception Handling

```cpp
Exception* exc = nullptr;

// Invoke method with exception capture
Runtime::Invoke(method, obj, args, &exc);

if (exc) {
    std::string message = exc->getMessage();
    std::string stackTrace = exc->GetStackTrace();

    printf("Exception: %s\n", message.c_str());
    printf("Stack: %s\n", stackTrace.c_str());
}
```

### GC Management

```cpp
// Disable GC for critical section
GC::Disable();
// ... critical code ...
GC::Enable();

// Manual collection
GC::Collect();
GC::CollectALittle();

// GC statistics
uint64_t heapSize = GC::GetHeapSize();
uint64_t usedSize = GC::GetUsedSize();
```

### Reflection

```cpp
// Iterate all loaded classes
Class::ForEach([](Class* klass) {
    printf("Class: %s.%s\n", klass->GetNamespace(), klass->GetName());

    // Iterate methods
    auto methods = klass->GetMethods();
    for (auto method : methods) {
        printf("  Method: %s\n", method->GetName());
    }

    // Iterate fields
    auto fields = klass->GetFields();
    for (auto field : fields) {
        printf("  Field: %s\n", field->GetName());
    }
});
```

### Custom Attributes

```cpp
Class* targetClass = /* ... */;

// Check if class has custom attribute
if (targetClass->HasAttribute("System.SerializableAttribute")) {
    printf("Class is serializable\n");
}

// Get custom attributes
auto attributes = targetClass->GetCustomAttributes();
for (auto attr : attributes) {
    printf("Attribute: %s\n", attr->GetName());
}
```

## 📚 API Structure

### Core Types
- **Pointer**: Base pointer type for all managed references with generic access
- **Object**: Managed object instances with class information
- **Struct**: Value types with stack-based semantics
- **Class**: Type information and reflection

### Method & Field Access
- **Method**: Static and instance method invocation with parameter binding
- **Field**: Direct field access with offset calculation
- **Property**: Property getter/setter access
- **Event**: Event handler subscription

### Memory Management
- **Domain**: Application domain for assembly loading and type resolution
- **Array**: Type-safe managed arrays with span integration
- **String**: Managed string type with encoding support
- **GC**: Garbage collection control
- **GCHandle**: Reference management for GC objects

### Advanced Features
- **Delegate**: C# delegate support with native interop
- **Type**: Type reflection and generic type information
- **Exception**: Exception handling with stack traces
- **Thread**: Threading and stack trace support
- **CustomAttribute**: Attribute inspection and analysis

### Utilities
- **Runtime**: Direct invocation and parameter binding
- **Program**: Initialization and shutdown
- **Stats**: Performance statistics collection

## 🔧 Build & Integration

### Include the Wrapper
```cpp
#include "Il2CppWrapper.h"
using namespace Il2CppWrapper;
```

### Initialize with Callbacks
```cpp
Core::Callbacks callbacks;
callbacks.fn_GetModule = GetModuleHandle;  // Load GameAssembly.dll
callbacks.fn_GetProcAddr = GetProcAddress; // Get API function pointers

Il2CppWrapper::Initialize(callbacks);
Program::Init("AppDomain");
```

### Link Requirements
- Link against the Il2Cpp runtime library
- Include the Il2Cpp headers
- Windows: Link GameAssembly.dll
- Cross-platform support with preprocessor conditionals

## 📖 Advanced Usage

### Generic Type Support
```cpp
// Access generic type parameters
Class* listClass = Domain::Get()->LookUpClass("System.Collections.Generic", "List`1");
Type* intType = /* Get System.Int32 type */;
Class* listIntClass = listClass->MakeGenericType(intType);
```

### Liveness Analysis
```cpp
// Track object references for GC optimization
Liveness liveness;
GC::UnityLivenessCalculationFromRoot(&liveness);
// ... analyze reachability ...
```

### Static Field Access
```cpp
Class* playerClass = Domain::Get()->LookUpClass("Game", "Player");
Field* instanceField = playerClass->GetFieldFromName("instance");

// Get static field data
Object* playerInstance = (Object*)playerClass->GetStaticFieldData(instanceField);
```

## 🎮 Real-World Examples

### Calling Unity API
```cpp
// Get the main camera
Class* cameraClass = Domain::Get()->LookUpClass("UnityEngine", "Camera");
Method* mainMethod = cameraClass->GetMethodFromName("get_main", 0);
Object* camera = (Object*)Runtime::Invoke(mainMethod, nullptr, nullptr, nullptr);
```

### Modifying Game Objects
```cpp
Class* goClass = Domain::Get()->LookUpClass("UnityEngine", "GameObject");
Method* addComponent = goClass->GetMethodFromName("AddComponent", 1);

Class* scriptClass = Domain::Get()->LookUpClass("Game.Scripts", "PlayerController");
Object* go = /* Get game object */;

void* args[] = { scriptClass->GetType() };
Runtime::Invoke(addComponent, go, args, nullptr);
```

### Managing Collections
```cpp
Class* listClass = Domain::Get()->LookUpClass("System.Collections.Generic", "List`1");
// ... create generic list ...
Object* list = Object::New(listClass);

Method* addMethod = listClass->GetMethodFromName("Add", 1);
Object* item = /* ... */;
void* args[] = { item };
Runtime::Invoke(addMethod, list, args, nullptr);
```

## 🐛 Error Handling

Always check exceptions after Il2Cpp operations:
```cpp
Exception* exc = nullptr;
Runtime::Invoke(method, obj, args, &exc);

if (exc) {
    printf("IL2CPP Exception: %s\n", exc->getMessage().c_str());
    exc->Raise();  // Re-raise to managed code
}
```

## 📝 License

MIT License

