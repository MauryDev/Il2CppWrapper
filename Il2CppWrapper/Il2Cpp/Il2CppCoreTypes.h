#pragma once
#include "Il2CppWrapper.h"
namespace Il2CppWrapper {

	struct CoreTypes {
		// ========== TIPOS PRIMITIVOS ==========
		inline static Class* SByte;      // System.SByte
		inline static Class* Byte;       // System.Byte
		inline static Class* Int16;      // System.Int16
		inline static Class* UInt16;     // System.UInt16
		inline static Class* Int32;      // System.Int32
		inline static Class* UInt32;     // System.UInt32
		inline static Class* Int64;      // System.Int64
		inline static Class* UInt64;     // System.UInt64
		inline static Class* Char;       // System.Char
		inline static Class* Single;     // System.Single (float)
		inline static Class* Double;     // System.Double
		inline static Class* Decimal;    // System.Decimal
		inline static Class* Boolean;    // System.Boolean
		inline static Class* Void;       // System.Void
		inline static Class* Object;     // System.Object
		inline static Class* String;     // System.String

		// ========== COLEÇÕES GENÉRICAS ==========
		inline static Class* ListT;      // System.Collections.Generic.List`1
		inline static Class* DictionaryKV;  // System.Collections.Generic.Dictionary`2
		inline static Class* HashSetT;   // System.Collections.Generic.HashSet`1
		inline static Class* QueueT;     // System.Collections.Generic.Queue`1
		inline static Class* StackT;     // System.Collections.Generic.Stack`1
		inline static Class* LinkedListT; // System.Collections.Generic.LinkedList`1

		// ========== INTERFACES COLEÇÕES ==========
		inline static Class* IEnumerableT;    // System.Collections.Generic.IEnumerable`1
		inline static Class* IEnumerable;     // System.Collections.IEnumerable
		inline static Class* IEnumeratorT;    // System.Collections.Generic.IEnumerator`1
		inline static Class* IEnumerator;     // System.Collections.IEnumerator
		inline static Class* ICollectionT;    // System.Collections.Generic.ICollection`1
		inline static Class* ICollection;     // System.Collections.ICollection
		inline static Class* IListT;         // System.Collections.Generic.IList`1
		inline static Class* IDictionaryKV;  // System.Collections.Generic.IDictionary`2

		// ========== LINQ ==========
		inline static Class* IQueryableT;    // System.Linq.IQueryable`1

		// ========== TIPOS ANULÁVEIS ==========
		inline static Class* NullableT;      // System.Nullable`1

		// ========== DELEGATES ==========
		inline static Class* Action;         // System.Action
		inline static Class* ActionT;        // System.Action`1
		inline static Class* FuncT;          // System.Func`1
		inline static Class* FuncT1T2;       // System.Func`2
		inline static Class* PredicateT;     // System.Predicate`1
		inline static Class* EventHandler;   // System.EventHandler
		inline static Class* Delegate;       // System.Delegate

		// ========== ASYNC / THREADING ==========
		inline static Class* Task;           // System.Threading.Tasks.Task
		inline static Class* TaskT;          // System.Threading.Tasks.Task`1
		inline static Class* Thread;         // System.Threading.Thread
		inline static Class* CancellationToken; // System.Threading.CancellationToken

		// ========== DATE / TIME ==========
		inline static Class* DateTime;       // System.DateTime
		inline static Class* DateTimeOffset; // System.DateTimeOffset
		inline static Class* TimeSpan;       // System.TimeSpan

		// ========== IO ==========
		inline static Class* File;           // System.IO.File
		inline static Class* Directory;      // System.IO.Directory
		inline static Class* Stream;         // System.IO.Stream
		inline static Class* MemoryStream;   // System.IO.MemoryStream
		inline static Class* BinaryReader;   // System.IO.BinaryReader
		inline static Class* BinaryWriter;   // System.IO.BinaryWriter

		// ========== NET ==========
		inline static Class* HttpClient;           // System.Net.Http.HttpClient
		inline static Class* HttpRequestMessage;   // System.Net.Http.HttpRequestMessage
		inline static Class* HttpResponseMessage;  // System.Net.Http.HttpResponseMessage

		// ========== REFLEXÃO ==========
		inline static Class* Type;           // System.Type
		inline static Class* MethodInfo;     // System.Reflection.MethodInfo
		inline static Class* PropertyInfo;   // System.Reflection.PropertyInfo
		inline static Class* FieldInfo;      // System.Reflection.FieldInfo
		inline static Class* Attribute;      // System.Attribute

		// ========== UTILIDADES ==========
		inline static Class* Activator;      // System.Activator
		inline static Class* Random;         // System.Random
		inline static Class* Guid;           // System.Guid
		inline static Class* Version;        // System.Version
		inline static Class* Uri;            // System.Uri
		inline static Class* Environment;    // System.Environment
		inline static Class* Math;           // System.Math
		inline static Class* Convert;        // System.Convert
		inline static Class* Exception;      // System.Exception

		// ========== INTERFACES CORE ==========
		inline static Class* IDisposable;         // System.IDisposable
		inline static Class* IComparable;         // System.IComparable
		inline static Class* IComparableT;        // System.IComparable`1
		inline static Class* IEquatableT;         // System.IEquatable`1
		inline static Class* Array;               // System.Array
		inline static Class* IList;               // System.Collections.IList
		inline static Class* IDictionary;         // System.Collections.IDictionary

		// ========== INICIALIZAÇÃO ==========
		/**
		 * @brief Inicializa o cache de tipos core do .NET
		 * DEVE ser chamado após Initialize(callbacks) e Domain::Get() estar disponível
		 */
		static void Initialize();

		/**
		 * @brief Limpa o cache de tipos
		 */
		static void ClearCache();
	};
}