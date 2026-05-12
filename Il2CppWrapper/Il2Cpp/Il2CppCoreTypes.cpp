#include "Il2CppCoreTypes.h"

namespace {
    bool Inited = false;
}
namespace Il2CppWrapper {
    // ========== FUNÇÃO DE INICIALIZAÇÃO ==========
    void CoreTypes::Initialize() {
        if (Inited) return;
        Inited = true;
        auto domain = Domain::GetCurrent();
        // TIPOS PRIMITIVOS
        CoreTypes::SByte = domain->LookUpClass("System", "SByte");
        CoreTypes::Byte = domain->LookUpClass("System", "Byte");
        CoreTypes::Int16 = domain->LookUpClass("System", "Int16");
        CoreTypes::UInt16 = domain->LookUpClass("System", "UInt16");
        CoreTypes::Int32 = domain->LookUpClass("System", "Int32");
        CoreTypes::UInt32 = domain->LookUpClass("System", "UInt32");
        CoreTypes::Int64 = domain->LookUpClass("System", "Int64");
        CoreTypes::UInt64 = domain->LookUpClass("System", "UInt64");
        CoreTypes::Char = domain->LookUpClass("System", "Char");
        CoreTypes::Single = domain->LookUpClass("System", "Single");
        CoreTypes::Double = domain->LookUpClass("System", "Double");
        CoreTypes::Decimal = domain->LookUpClass("System", "Decimal");
        CoreTypes::Boolean = domain->LookUpClass("System", "Boolean");
        CoreTypes::Void = domain->LookUpClass("System", "Void");
        CoreTypes::Object = domain->LookUpClass("System", "Object");
        CoreTypes::String = domain->LookUpClass("System", "String");

        // COLEÇÕES GENÉRICAS
        CoreTypes::ListT = domain->LookUpClass("System.Collections.Generic", "List`1");
        CoreTypes::DictionaryKV = domain->LookUpClass("System.Collections.Generic", "Dictionary`2");
        CoreTypes::HashSetT = domain->LookUpClass("System.Collections.Generic", "HashSet`1");
        CoreTypes::QueueT = domain->LookUpClass("System.Collections.Generic", "Queue`1");
        CoreTypes::StackT = domain->LookUpClass("System.Collections.Generic", "Stack`1");
        CoreTypes::LinkedListT = domain->LookUpClass("System.Collections.Generic", "LinkedList`1");

        // INTERFACES COLEÇÕES
        CoreTypes::IEnumerableT = domain->LookUpClass("System.Collections.Generic", "IEnumerable`1");
        CoreTypes::IEnumerable = domain->LookUpClass("System.Collections", "IEnumerable");
        CoreTypes::IEnumeratorT = domain->LookUpClass("System.Collections.Generic", "IEnumerator`1");
        CoreTypes::IEnumerator = domain->LookUpClass("System.Collections", "IEnumerator");
        CoreTypes::ICollectionT = domain->LookUpClass("System.Collections.Generic", "ICollection`1");
        CoreTypes::ICollection = domain->LookUpClass("System.Collections", "ICollection");
        CoreTypes::IListT = domain->LookUpClass("System.Collections.Generic", "IList`1");
        CoreTypes::IDictionaryKV = domain->LookUpClass("System.Collections.Generic", "IDictionary`2");

        // LINQ
        CoreTypes::IQueryableT = domain->LookUpClass("System.Linq", "IQueryable`1");

        // TIPOS ANULÁVEIS
        CoreTypes::NullableT = domain->LookUpClass("System", "Nullable`1");

        // DELEGATES
        CoreTypes::Action = domain->LookUpClass("System", "Action");
        CoreTypes::ActionT = domain->LookUpClass("System", "Action`1");
        CoreTypes::FuncT = domain->LookUpClass("System", "Func`1");
        CoreTypes::FuncT1T2 = domain->LookUpClass("System", "Func`2");
        CoreTypes::PredicateT = domain->LookUpClass("System", "Predicate`1");
        CoreTypes::EventHandler = domain->LookUpClass("System", "EventHandler");
		CoreTypes::Delegate = domain->LookUpClass("System", "Delegate");

        // ASYNC / THREADING
        CoreTypes::Task = domain->LookUpClass("System.Threading.Tasks", "Task");
        CoreTypes::TaskT = domain->LookUpClass("System.Threading.Tasks", "Task`1");
        CoreTypes::Thread = domain->LookUpClass("System.Threading", "Thread");
        CoreTypes::CancellationToken = domain->LookUpClass("System.Threading", "CancellationToken");

        // DATE / TIME
        CoreTypes::DateTime = domain->LookUpClass("System", "DateTime");
        CoreTypes::DateTimeOffset = domain->LookUpClass("System", "DateTimeOffset");
        CoreTypes::TimeSpan = domain->LookUpClass("System", "TimeSpan");

        // IO
        CoreTypes::File = domain->LookUpClass("System.IO", "File");
        CoreTypes::Directory = domain->LookUpClass("System.IO", "Directory");
        CoreTypes::Stream = domain->LookUpClass("System.IO", "Stream");
        CoreTypes::MemoryStream = domain->LookUpClass("System.IO", "MemoryStream");
        CoreTypes::BinaryReader = domain->LookUpClass("System.IO", "BinaryReader");
        CoreTypes::BinaryWriter = domain->LookUpClass("System.IO", "BinaryWriter");

        // NET
        CoreTypes::HttpClient = domain->LookUpClass("System.Net.Http", "HttpClient");
        CoreTypes::HttpRequestMessage = domain->LookUpClass("System.Net.Http", "HttpRequestMessage");
        CoreTypes::HttpResponseMessage = domain->LookUpClass("System.Net.Http", "HttpResponseMessage");

        // REFLEXÃO
        CoreTypes::Type = domain->LookUpClass("System", "Type");
        CoreTypes::MethodInfo = domain->LookUpClass("System.Reflection", "MethodInfo");
        CoreTypes::PropertyInfo = domain->LookUpClass("System.Reflection", "PropertyInfo");
        CoreTypes::FieldInfo = domain->LookUpClass("System.Reflection", "FieldInfo");
        CoreTypes::Attribute = domain->LookUpClass("System", "Attribute");

        // UTILIDADES
        CoreTypes::Activator = domain->LookUpClass("System", "Activator");
        CoreTypes::Random = domain->LookUpClass("System", "Random");
        CoreTypes::Guid = domain->LookUpClass("System", "Guid");
        CoreTypes::Version = domain->LookUpClass("System", "Version");
        CoreTypes::Uri = domain->LookUpClass("System", "Uri");
        CoreTypes::Environment = domain->LookUpClass("System", "Environment");
        CoreTypes::Math = domain->LookUpClass("System", "Math");
        CoreTypes::Convert = domain->LookUpClass("System", "Convert");
        CoreTypes::Exception = domain->LookUpClass("System", "Exception");

        // INTERFACES CORE
        CoreTypes::IDisposable = domain->LookUpClass("System", "IDisposable");
        CoreTypes::IComparable = domain->LookUpClass("System", "IComparable");
        CoreTypes::IComparableT = domain->LookUpClass("System", "IComparable`1");
        CoreTypes::IEquatableT = domain->LookUpClass("System", "IEquatable`1");
        CoreTypes::Array = domain->LookUpClass("System", "Array");
        CoreTypes::IList = domain->LookUpClass("System.Collections", "IList");
        CoreTypes::IDictionary = domain->LookUpClass("System.Collections", "IDictionary");
    }

    void CoreTypes::ClearCache() {
        if (!Inited) return;
        Inited = false;
        CoreTypes::SByte = nullptr;
        CoreTypes::Byte = nullptr;
        CoreTypes::Int16 = nullptr;
        CoreTypes::UInt16 = nullptr;
        CoreTypes::Int32 = nullptr;
        CoreTypes::UInt32 = nullptr;
        CoreTypes::Int64 = nullptr;
        CoreTypes::UInt64 = nullptr;
        CoreTypes::Char = nullptr;
        CoreTypes::Single = nullptr;
        CoreTypes::Double = nullptr;
        CoreTypes::Decimal = nullptr;
        CoreTypes::Boolean = nullptr;
        CoreTypes::Void = nullptr;
        CoreTypes::Object = nullptr;
        CoreTypes::String = nullptr;
        CoreTypes::ListT = nullptr;
        CoreTypes::DictionaryKV = nullptr;
        CoreTypes::HashSetT = nullptr;
        CoreTypes::QueueT = nullptr;
        CoreTypes::StackT = nullptr;
        CoreTypes::LinkedListT = nullptr;
        CoreTypes::IEnumerableT = nullptr;
        CoreTypes::IEnumerable = nullptr;
        CoreTypes::IEnumeratorT = nullptr;
        CoreTypes::IEnumerator = nullptr;
        CoreTypes::ICollectionT = nullptr;
        CoreTypes::ICollection = nullptr;
        CoreTypes::IListT = nullptr;
        CoreTypes::IDictionaryKV = nullptr;
        CoreTypes::IQueryableT = nullptr;
        CoreTypes::NullableT = nullptr;
        CoreTypes::Action = nullptr;
        CoreTypes::ActionT = nullptr;
        CoreTypes::FuncT = nullptr;
        CoreTypes::FuncT1T2 = nullptr;
        CoreTypes::PredicateT = nullptr;
        CoreTypes::EventHandler = nullptr;
		CoreTypes::Delegate = nullptr;
        CoreTypes::Task = nullptr;
        CoreTypes::TaskT = nullptr;
        CoreTypes::Thread = nullptr;
        CoreTypes::CancellationToken = nullptr;
        CoreTypes::DateTime = nullptr;
        CoreTypes::DateTimeOffset = nullptr;
        CoreTypes::TimeSpan = nullptr;
        CoreTypes::File = nullptr;
        CoreTypes::Directory = nullptr;
        CoreTypes::Stream = nullptr;
        CoreTypes::MemoryStream = nullptr;
        CoreTypes::BinaryReader = nullptr;
        CoreTypes::BinaryWriter = nullptr;
        CoreTypes::HttpClient = nullptr;
        CoreTypes::HttpRequestMessage = nullptr;
        CoreTypes::HttpResponseMessage = nullptr;
        CoreTypes::Type = nullptr;
        CoreTypes::MethodInfo = nullptr;
        CoreTypes::PropertyInfo = nullptr;
        CoreTypes::FieldInfo = nullptr;
        CoreTypes::Attribute = nullptr;
        CoreTypes::Activator = nullptr;
        CoreTypes::Random = nullptr;
        CoreTypes::Guid = nullptr;
        CoreTypes::Version = nullptr;
        CoreTypes::Uri = nullptr;
        CoreTypes::Environment = nullptr;
        CoreTypes::Math = nullptr;
        CoreTypes::Convert = nullptr;
        CoreTypes::Exception = nullptr;
        CoreTypes::IDisposable = nullptr;
        CoreTypes::IComparable = nullptr;
        CoreTypes::IComparableT = nullptr;
        CoreTypes::IEquatableT = nullptr;
        CoreTypes::Array = nullptr;
        CoreTypes::IList = nullptr;
        CoreTypes::IDictionary = nullptr;
    }
}
