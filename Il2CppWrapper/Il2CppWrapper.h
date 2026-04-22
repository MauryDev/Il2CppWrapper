#pragma once
#include <cinttypes>
#include <span>
#include <vector>
#include <string>
#include "DistCallback.h"
#include <type_traits>
#include <array>
#include <stdexcept>

namespace Il2CppWrapper {

	namespace {
		template<typename TRet, typename ...TArgs>
		using Func = TRet(*)(TArgs...);
	}

	inline Core::Callbacks callbacks;

	void Initialize(Core::Callbacks& callbacks);



	struct Pointer;
	struct Image;
	struct ManagedPointer;
	struct Class;
	struct Array;
	struct Assembly;
#if _MSC_VER
	using Char = wchar_t;
#else
	using Char = wchar_t;
#define IL2CPP_NATIVE_STRING(str) str
#endif

#if _MSC_VER
	using Char = wchar_t;
#elif __has_feature(cxx_unicode_literals)
	using Char = char16_t;
#else
	using Char = uint16_t;
#endif
	struct String;
	using Stat = int;
	struct GCHandle;
	using Array_size_t = size_t;
	struct Type;
	struct Field;
	struct Method;
	struct Event;
	struct Property;
	struct ReflectionType;
	struct Domain;
	struct Exception;
	struct Liveness;
	struct ReflectionMethod;

	struct Object;
	struct ReflectionField;
	struct Monitor;
	struct Runtime;
	struct Thread;
	struct DebuggerTransport;
	struct CustomAttribute;
	struct MemoryInformation;
	enum class GCMode;
	enum class RuntimeUnhandledExceptionPolicy;
	struct MemoryCallbacks;
	typedef void (*LivenessRegisterCallback)(Object* obj, void* userdata);
	typedef void* (*LivenessReallocateCallback)(void* ptr, size_t size, void* userdata);
	struct StackFrameInfo;

	typedef void (*FrameWalkFunc)(const StackFrameInfo* info, void* user_data);
	typedef size_t(*BacktraceFunc)(Pointer* buffer, size_t maxSize);


#if _MSC_VER
	using NativeChar = wchar_t;

#else
	using NativeChar = char;

#endif

	typedef void (*LogCallback)(const char* message);

	typedef void* (*FindPluginCallback)(NativeChar* name);

	struct MethodDebugInfo;
	typedef uint8_t(*AndroidUpStateFunc)(const char* ifName, uint8_t* is_up);





	inline Func<int, const char*> il2cpp_init;
	inline Func<int, const Char*> il2cpp_init_utf16;
	inline Func<void> il2cpp_shutdown;
	inline Func<void, const char*> il2cpp_set_config_dir;
	inline Func<void, const char*> il2cpp_set_data_dir;
	inline Func<void, const char*> il2cpp_set_temp_dir;
	inline Func<void, int, const char* const [], const char*> il2cpp_set_commandline_arguments;
	inline Func<void, int, const Char* const [], const char*> il2cpp_set_commandline_arguments_utf16;
	inline Func<void, const Char*> il2cpp_set_config_utf16;
	inline Func<void, const char*> il2cpp_set_config;
	inline Func<void, MemoryCallbacks*> il2cpp_set_memory_callbacks;


	inline Func<const Image*> il2cpp_get_corlib;


	inline Func<void, const char*, void*> il2cpp_add_internal_call;
	inline Func<Pointer*, const char*> il2cpp_resolve_icall;

	inline Func<ManagedPointer*, size_t> il2cpp_alloc;
	inline Func<void, ManagedPointer*> il2cpp_free;


	inline Func<Class*, Class*, uint32_t> il2cpp_array_class_get;
	inline Func<uint32_t, Array*> il2cpp_array_length;
	inline Func<uint32_t, Array*> il2cpp_array_get_byte_length;
	inline Func<Array*, Class*, Array_size_t> il2cpp_array_new;
	inline Func<Array*, Class*, Array_size_t> il2cpp_array_new_specific;
	inline Func<Array*, Class*, Array_size_t*, Array_size_t*> il2cpp_array_new_full;
	inline Func<Class*, Class*, uint32_t, bool> il2cpp_bounded_array_class_get;
	inline Func<int, const Class*> il2cpp_array_element_size;


	inline Func<const Image*, const Assembly*> il2cpp_assembly_get_image;

	inline Func<void, void(*)(Class*, void*), void*> il2cpp_class_for_each;
	inline Func<const Type*, Class*> il2cpp_class_enum_basetype;
	inline Func<bool, const Class*> il2cpp_class_is_inited;
	inline Func<bool, const Class*> il2cpp_class_is_generic;
	inline Func<bool, const Class*> il2cpp_class_is_inflated;
	inline Func<bool, Class*, Class*> il2cpp_class_is_assignable_from;
	inline Func<bool, Class*, Class*, bool> il2cpp_class_is_subclass_of;
	inline Func<bool, Class*, Class*> il2cpp_class_has_parent;
	inline Func<Class*, const Type*> il2cpp_class_from_il2cpp_type;
	inline Func<Class*, const Image*, const char*, const char*> il2cpp_class_from_name;
	inline Func<Class*, ReflectionType*> il2cpp_class_from_system_type;
	inline Func<Class*, Class*> il2cpp_class_get_element_class;
	inline Func<const Event*, Class*, void**> il2cpp_class_get_events;
	inline Func<Field*, Class*, void**> il2cpp_class_get_fields;
	inline Func<Class*, Class*, void**> il2cpp_class_get_nested_types;
	inline Func<Class*, Class*, void**> il2cpp_class_get_interfaces;
	inline Func<const Property*, Class*, void**> il2cpp_class_get_properties;
	inline Func<const Property*, Class*, const char*> il2cpp_class_get_property_from_name;
	inline Func<Field*, Class*, const char*> il2cpp_class_get_field_from_name;
	inline Func<const Method*, Class*, void**> il2cpp_class_get_methods;
	inline Func<const Method*, Class*, const char*, int> il2cpp_class_get_method_from_name;
	inline Func<const char*, Class*> il2cpp_class_get_name;
	inline Func<void, const Type*, void(*)(void*, void*), void*> il2cpp_type_get_name_chunked;
	inline Func<const char*, Class*> il2cpp_class_get_namespace;
	inline Func<Class*, Class*> il2cpp_class_get_parent;
	inline Func<Class*, Class*> il2cpp_class_get_declaring_type;
	inline Func<int32_t, Class*> il2cpp_class_instance_size;
	inline Func<size_t, const Class*> il2cpp_class_num_fields;
	inline Func<bool, const Class*> il2cpp_class_is_valuetype;
	inline Func<int32_t, Class*, uint32_t*> il2cpp_class_value_size;
	inline Func<bool, const Class*> il2cpp_class_is_blittable;
	inline Func<int, const Class*> il2cpp_class_get_flags;
	inline Func<bool, const Class*> il2cpp_class_is_abstract;
	inline Func<bool, const Class*> il2cpp_class_is_interface;
	inline Func<int, const Class*> il2cpp_class_array_element_size;
	inline Func<Class*, const Type*> il2cpp_class_from_type;
	inline Func<const Type*, Class*> il2cpp_class_get_type;
	inline Func<uint32_t, Class*> il2cpp_class_get_type_token;
	inline Func<bool, Class*, Class*> il2cpp_class_has_attribute;
	inline Func<bool, Class*> il2cpp_class_has_references;
	inline Func<bool, const Class*> il2cpp_class_is_enum;
	inline Func<const Image*, Class*> il2cpp_class_get_image;
	inline Func<const char*, const Class*> il2cpp_class_get_assemblyname;
	inline Func<int, const Class*> il2cpp_class_get_rank;
	inline Func<uint32_t, const Class*> il2cpp_class_get_data_size;
	inline Func<void*, const Class*> il2cpp_class_get_static_field_data;

	inline Func<bool, const char*> il2cpp_stats_dump_to_file;
	inline Func<uint64_t, Stat> il2cpp_stats_get_value;

	inline Func<Domain*> il2cpp_domain_get;
	inline Func<const Assembly*, Domain*, const char*> il2cpp_domain_assembly_open;
	inline Func<const Assembly**, const Domain*, size_t*> il2cpp_domain_get_assemblies;

	inline Func<void, Exception*> il2cpp_raise_exception;
	inline Func<Exception*, const Image*, const char*, const char*, const char*> il2cpp_exception_from_name_msg;
	inline Func<Exception*, const char*> il2cpp_get_exception_argument_null;
	inline Func<void, const Exception*, char*, int> il2cpp_format_exception;
	inline Func<void, const Exception*, char*, int> il2cpp_format_stack_trace;
	inline Func<void, Exception*> il2cpp_unhandled_exception;
	inline Func<void, const Exception*, uintptr_t**, int*, char**, char**> il2cpp_native_stack_trace;


	inline Func<int, Field*> il2cpp_field_get_flags;
	inline Func<const Field*, ReflectionField*> il2cpp_field_get_from_reflection;
	inline Func<const char*, Field*> il2cpp_field_get_name;
	inline Func<Class*, Field*> il2cpp_field_get_parent;
	inline Func<ReflectionField*, Field*, Class*> il2cpp_field_get_object;
	inline Func<size_t, Field*> il2cpp_field_get_offset;
	inline Func<const Type*, Field*> il2cpp_field_get_type;
	inline Func<void, Object*, Field*, void*> il2cpp_field_get_value;
	inline Func<Object*, Field*, Object*> il2cpp_field_get_value_object;
	inline Func<bool, Field*, Class*> il2cpp_field_has_attribute;
	inline Func<void, Object*, Field*, void*> il2cpp_field_set_value;
	inline Func<void, Field*, void*> il2cpp_field_static_get_value;
	inline Func<void, Field*, void*> il2cpp_field_static_set_value;
	inline Func<void, Object*, Field*, Object*> il2cpp_field_set_value_object;
	inline Func<bool, Field*> il2cpp_field_is_literal;

	inline Func<void, int> il2cpp_gc_collect;
	inline Func<int32_t> il2cpp_gc_collect_a_little;
	inline Func<void> il2cpp_gc_start_incremental_collection;
	inline Func<void> il2cpp_gc_disable;
	inline Func<void> il2cpp_gc_enable;
	inline Func<bool> il2cpp_gc_is_disabled;
	inline Func<void, GCMode> il2cpp_gc_set_mode;
	inline Func<int64_t> il2cpp_gc_get_max_time_slice_ns;
	inline Func<void, int64_t> il2cpp_gc_set_max_time_slice_ns;
	inline Func<bool> il2cpp_gc_is_incremental;
	inline Func<int64_t> il2cpp_gc_get_used_size;
	inline Func<int64_t> il2cpp_gc_get_heap_size;
	inline Func<void, Object*, void**, void*> il2cpp_gc_wbarrier_set_field;
	inline Func<bool> il2cpp_gc_has_strict_wbarriers;
	inline Func<void, void(*)(void*, size_t, int)> il2cpp_gc_set_external_allocation_tracker;
	inline Func<void, void(*)(void**)> il2cpp_gc_set_external_wbarrier_tracker;
	inline Func<void, void(*)(void*, void*), void*> il2cpp_gc_foreach_heap;
	inline Func<void> il2cpp_stop_gc_world;
	inline Func<void> il2cpp_start_gc_world;
	inline Func<void*, size_t> il2cpp_gc_alloc_fixed;
	inline Func<void, void*> il2cpp_gc_free_fixed;

	inline Func<GCHandle*, Object*, bool> il2cpp_gchandle_new;
	inline Func<GCHandle*, Object*, bool> il2cpp_gchandle_new_weakref;
	inline Func<Object*, GCHandle*> il2cpp_gchandle_get_target;
	inline Func<void, GCHandle*> il2cpp_gchandle_free;
	inline Func<void, void(*)(void*, void*), void*> il2cpp_gchandle_foreach_get_target;

	inline Func<uint32_t> il2cpp_object_header_size;
	inline Func<uint32_t> il2cpp_array_object_header_size;
	inline Func<uint32_t> il2cpp_offset_of_array_length_in_array_object_header;
	inline Func<uint32_t> il2cpp_offset_of_array_bounds_in_array_object_header;
	inline Func<uint32_t> il2cpp_allocation_granularity;

	inline Func<void*, Class*, int, LivenessRegisterCallback, void*, LivenessReallocateCallback> il2cpp_unity_liveness_allocate_struct;
	inline Func<void, Object*, Liveness*> il2cpp_unity_liveness_calculation_from_root;
	inline Func<void, Liveness*> il2cpp_unity_liveness_calculation_from_statics;
	inline Func<void, Liveness*> il2cpp_unity_liveness_finalize;
	inline Func<void, Liveness*> il2cpp_unity_liveness_free_struct;


	inline Func<const Type*, const Method*> il2cpp_method_get_return_type;
	inline Func<Class*, const Method*> il2cpp_method_get_declaring_type;
	inline Func<const char*, const Method*> il2cpp_method_get_name;
	inline Func<const Method*, const ReflectionMethod*> il2cpp_method_get_from_reflection;
	inline Func<ReflectionMethod*, const Method*, Class*> il2cpp_method_get_object;
	inline Func<bool, const Method*> il2cpp_method_is_generic;
	inline Func<bool, const Method*> il2cpp_method_is_inflated;
	inline Func<bool, const Method*> il2cpp_method_is_instance;
	inline Func<uint32_t, const Method*> il2cpp_method_get_param_count;
	inline Func<const Type*, const Method*, uint32_t> il2cpp_method_get_param;
	inline Func<Class*, const Method*> il2cpp_method_get_class;
	inline Func<bool, const Method*, Class*> il2cpp_method_has_attribute;
	inline Func<uint32_t, const Method*, uint32_t*> il2cpp_method_get_flags;
	inline Func<uint32_t, const Method*> il2cpp_method_get_token;
	inline Func<const char*, const Method*, uint32_t> il2cpp_method_get_param_name;

	inline Func<uint32_t, Property*> il2cpp_property_get_flags;
	inline Func<const Method*, Property*> il2cpp_property_get_get_method;
	inline Func<const Method*, Property*> il2cpp_property_get_set_method;
	inline Func<const char*, Property*> il2cpp_property_get_name;
	inline Func<Class*, Property*> il2cpp_property_get_parent;

	inline Func<Class*, const Object*> il2cpp_object_get_class;
	inline Func<uint32_t, const Object*> il2cpp_object_get_size;
	inline Func<const Method*, const Object*, const Method*> il2cpp_object_get_virtual_method;
	inline Func<Object*, const Class*> il2cpp_object_new;
	inline Func<void*, const Object*> il2cpp_object_unbox;
	inline Func<Object*, Class*, void*> il2cpp_value_box;

	inline Func<void, Object*> il2cpp_monitor_enter;
	inline Func<bool, Object*, uint32_t> il2cpp_monitor_try_enter;
	inline Func<void, Object*> il2cpp_monitor_exit;
	inline Func<void, Object*> il2cpp_monitor_pulse;
	inline Func<void, Object*> il2cpp_monitor_pulse_all;
	inline Func<void, Object*> il2cpp_monitor_wait;
	inline Func<bool, Object*, uint32_t> il2cpp_monitor_try_wait;

	inline Func<Object*, const Method*, void*, void**, Exception**> il2cpp_runtime_invoke;
	inline Func<Object*, const Method*, void*, Object**, int, Exception**> il2cpp_runtime_invoke_convert_args;
	inline Func<void, Class*> il2cpp_runtime_class_init;
	inline Func<void, Object*> il2cpp_runtime_object_init;
	inline Func<void, Object*, Exception**> il2cpp_runtime_object_init_exception;
	inline Func<void, RuntimeUnhandledExceptionPolicy> il2cpp_runtime_unhandled_exception_policy_set;

	inline Func<int32_t, String*> il2cpp_string_length;
	inline Func<Char*, String*> il2cpp_string_chars;
	inline Func<String*, const char*> il2cpp_string_new;
	inline Func<String*, const char*, uint32_t> il2cpp_string_new_len;
	inline Func<String*, const Char*, int32_t> il2cpp_string_new_utf16;
	inline Func<String*, const char*> il2cpp_string_new_wrapper;
	inline Func<String*, String*> il2cpp_string_intern;
	inline Func<String*, String*> il2cpp_string_is_interned;

	inline Func<Thread*> il2cpp_thread_current;
	inline Func<Thread*, Domain*> il2cpp_thread_attach;
	inline Func<void, Thread*> il2cpp_thread_detach;
	inline Func<bool, Thread*> il2cpp_is_vm_thread;

	inline Func<void, FrameWalkFunc, void*> il2cpp_current_thread_walk_frame_stack;
	inline Func<void, Thread*, FrameWalkFunc, void*> il2cpp_thread_walk_frame_stack;
	inline Func<bool, StackFrameInfo*> il2cpp_current_thread_get_top_frame;
	inline Func<bool, Thread*, StackFrameInfo*> il2cpp_thread_get_top_frame;
	inline Func<bool, int32_t, StackFrameInfo*> il2cpp_current_thread_get_frame_at;
	inline Func<bool, Thread*, int32_t, StackFrameInfo*> il2cpp_thread_get_frame_at;
	inline Func<int32_t> il2cpp_current_thread_get_stack_depth;
	inline Func<int32_t, Thread*> il2cpp_thread_get_stack_depth;
	inline Func<void, BacktraceFunc> il2cpp_override_stack_backtrace;

	inline Func<Object*, const Type*> il2cpp_type_get_object;
	inline Func<int, const Type*> il2cpp_type_get_type;
	inline Func<Class*, const Type*> il2cpp_type_get_class_or_element_class;
	inline Func<char*, const Type*> il2cpp_type_get_name;
	inline Func<bool, const Type*> il2cpp_type_is_byref;
	inline Func<uint32_t, const Type*> il2cpp_type_get_attrs;
	inline Func<bool, const Type*, const Type*> il2cpp_type_equals;
	inline Func<char*, const Type*> il2cpp_type_get_assembly_qualified_name;
	inline Func<char*, const Type*> il2cpp_type_get_reflection_name;
	inline Func<bool, const Type*> il2cpp_type_is_static;
	inline Func<bool, const Type*> il2cpp_type_is_pointer_type;

	inline Func<const Assembly*, const Image*> il2cpp_image_get_assembly;
	inline Func<const char*, const Image*> il2cpp_image_get_name;
	inline Func<const char*, const Image*> il2cpp_image_get_filename;
	inline Func<const Method*, const Image*> il2cpp_image_get_entry_point;
	inline Func<size_t, const Image*> il2cpp_image_get_class_count;
	inline Func<const Class*, const Image*, size_t> il2cpp_image_get_class;

	inline Func<MemoryInformation*> il2cpp_capture_memory_snapshot;
	inline Func<void, MemoryInformation*> il2cpp_free_captured_memory_snapshot;
	inline Func<void, FindPluginCallback> il2cpp_set_find_plugin_callback;

	inline Func<void, LogCallback> il2cpp_register_log_callback;

	inline Func<void, const char*> il2cpp_debugger_set_agent_options;
	inline Func<bool> il2cpp_is_debugger_attached;
	inline Func<void, DebuggerTransport*> il2cpp_register_debugger_agent_transport;

	inline Func<bool, const Method*, MethodDebugInfo*> il2cpp_debug_get_method_info;
	inline Func<void, const void*> il2cpp_unity_install_unitytls_interface;

	inline Func<CustomAttribute*, Class*> il2cpp_custom_attrs_from_class;
	inline Func<CustomAttribute*, const Method*> il2cpp_custom_attrs_from_method;
	inline Func<CustomAttribute*, const Field*> il2cpp_custom_attrs_from_field;
	inline Func<Object*, CustomAttribute*, Class*> il2cpp_custom_attrs_get_attr;
	inline Func<bool, CustomAttribute*, Class*> il2cpp_custom_attrs_has_attr;
	inline Func<Array*, CustomAttribute*> il2cpp_custom_attrs_construct;
	inline Func<void, CustomAttribute*> il2cpp_custom_attrs_free;


	inline Func<void, Class*, Pointer*> il2cpp_class_set_userdata;
	inline Func<int> il2cpp_class_get_userdata_offset;
	inline Func<void, int64_t> il2cpp_set_default_thread_affinity;
	inline Func<void, AndroidUpStateFunc> il2cpp_unity_set_android_network_up_state_func;

	inline Func<size_t, const Class*> il2cpp_class_get_bitmap_size;
	inline Func<void, Class*, size_t*> il2cpp_class_get_bitmap;

	struct MethodFlags {
		uint32_t flags;
		uint32_t implementationFlags;
	};
	struct ValueSize {
		int32_t size;
		uint32_t alignment;
	};
	enum class GCMode {
		IL2CPP_GC_MODE_DISABLED,
		IL2CPP_GC_MODE_ENABLED,
		IL2CPP_GC_MODE_MANUAL
	};
	struct NativeStackTrace {
		std::vector<uintptr_t> frames;
		std::string imageUUID;
		std::string imageName;
	};

	struct ParameterInfo {
		const char* name;
		const Type* type;
	};

	struct Pointer
	{
		bool isValid() const;
		template <typename T>
		T* as() {
			return reinterpret_cast<T*>(this);
		}

		template <typename T>
		T get() const {
			if (!isValid()) return T{};
			auto temp = this;
			T value{};
			PointerToValue(temp, value);
			return value;
		}
		Pointer* add(size_t offset) const;

		Pointer* operator[](size_t offset) const;

		operator bool() const;
		bool operator!() const;

		// Comparação
		bool operator==(const Pointer* other) const;
		bool Equals(const Pointer* other) const;
		template <typename T>
		static Pointer* ToPointer(const T& value)
		{
			Pointer* ret{};

			ValueToPointer(ret, value);
			return ret;
		}
	};

	
	struct ManagedPointer : Pointer {
		static ManagedPointer* Alloc(size_t n);
		ManagedPointer* Realloc(size_t n);
		void Free();
	};

	
	struct Domain : Pointer {
		static Domain* Get();

		const Assembly* OpenAssembly(const char* name);

		std::span<const Assembly*> GetAssembliesList() const;
		static const Image* GetCorlib();
		
		Class* LookUpClass(const char* namespaze, const char* name);
	};

	struct Class : Pointer {

		size_t GetBitmapSize() const;
		std::vector<size_t> GetBitmap();
		static void ForEach(void(*klassReportFunc)(Class* klass, void* userData), void* userData);
		
		template <typename F>
		static void ForEach(F&& callback) {
			auto invoker = [](Class* klass, void* userData) {
				(*static_cast<F*>(userData))(klass);
			};

			ForEach(invoker, &callback);
		}
		const Type* GetEnumBaseType();
		bool IsInited() const;
		bool IsGeneric() const;
		bool IsInflated() const;
		bool IsAssignableFrom(Class* oklass);
		bool IsSubclassOf(Class* klassc, bool check_interfaces);
		bool HasParent(Class* klassc);
		static Class* FromIl2CppType(const Type* type);
		static Class* FromName(const Image* image, const char* namespaze, const char* name);
		static Class* FromSystemType(ReflectionType* type);
		Class* GetElementClass();

	private:
		template <typename T>
		std::vector<const T*> CollectMetadata(T* (Class::* fetchFunc)(void**)) {
			std::vector<const T*> result;
			void* iter = nullptr;

			while (const T* item = (this->*fetchFunc)(&iter)) {
				result.push_back(item);
			}
			return result;
		}
		template <typename T, typename F>
		void ForEachMetadata(T* (Class::* fetchFunc)(void**), F&& callback) {
			void* iter = nullptr;
			while (const T* evt = (this->*fetchFunc)(&iter)) {
				callback(evt);
			}
		}
	public:
		const Event* GetEvents(void** iter);
		std::vector<const Event*> GetEventsList();
		template <typename F>
		void ForEachEvent(F&& callback) {
			ForEachMetadata(&Class::GetEvents, std::move(callback));

		}
		Field* GetFields(void** iter);
		std::vector<const Field*> GetFieldsList();
		template <typename F>
		void ForEachField(F&& callback) {
			ForEachMetadata(&Class::GetFields,std::move(callback));
			
		}

		Class* GetNestedTypes(void** iter);
		std::vector<const Class*> GetNestedTypesList();
		template <typename F>
		void ForEachNestedType(F&& callback) {
			ForEachMetadata(&Class::GetNestedTypes, std::move(callback));

		}

		Class* GetInterfaces(void** iter);
		std::vector<const Class*> GetInterfacesList();
		template <typename F>
		void ForEachInterfaces(F&& callback) {
			ForEachMetadata(&Class::GetInterfaces, std::move(callback));

		}


		const Property* GetProperties(void** iter);
		std::vector<const Property*> GetPropertiesList();
		template <typename F>
		void ForEachProperty(F&& callback) {
			ForEachMetadata(&Class::GetProperties, std::move(callback));

		}
		const Method* GetMethods(void** iter);
		std::vector<const Method*> GetMethodsList();
		template <typename F>
		void ForEachMethod(F&& callback) {
			ForEachMetadata(&Class::GetMethods, std::move(callback));

		}


		const Property* GetPropertyFromName(const char* name);
		Field* GetFieldFromName(const char* name);
		const Method* GetMethodFromName(const char* name, int argsCount);

		const char* GetName();
		const char* GetNamespace();
		Class* GetParent();
		Class* GetDeclaringType();
		int32_t GetInstanceSize();
		size_t GetNumFields() const;
		bool IsValueType() const;
		ValueSize GetValueSize();
		bool IsBlittable() const;
		int GetFlags() const;
		bool IsAbstract() const;
		bool IsInterface() const;
		int GetArrayElementSize() const;
		const Type* GetType();
		uint32_t GetTypeToken();
		bool HasAttribute(Class* attr_class);
		bool HasReferences();
		bool IsEnum() const;
		const Image* GetImage();
		const char* GetAssemblyName() const;
		int GetRank() const;
		uint32_t GetDataSize() const;
		void* GetStaticFieldData() const;

		bool IsString() const;
		bool IsInt32() const;
		std::string GetFullName();
		bool IsNested();

		Class* GetRootDeclaringType();


		/**
	 * @brief Obtém o nome do tipo de forma fragmentada (chunked).
	 */
		void GetNameChunked(const Type* type, void(*callback)(void*, void*), void* userData);

		/**
		 * @brief Obtém uma classe a partir de um tipo Il2Cpp.
		 */
		static Class* FromType(const Type* type);
	};
	struct Object : Pointer {
		// Retorna a classe (tipo) deste objeto
		Class* GetClass() const;

		// Retorna o tamanho ocupado pelo objeto na memória (em bytes)
		uint32_t GetSize() const;

		// Resolve qual implementação de um método virtual deve ser chamada para esta instância
		const Method* GetVirtualMethod(const Method* method) const;
		// --- Métodos Estáticos (Criação e Conversão) ---

		// Instancia uma nova classe (Equivalente ao 'new' do C#)
		static Object* New(const Class* klass);

		void* UnboxImpl();
		/**
		 * @brief Extrai o valor de um objeto (Unboxing).
		 * Usado para tipos como int, float, structs que foram "boxeados" em objetos.
		 */
		template <typename T>
		T Unbox() const {
			auto ptr = (Pointer*)UnboxImpl();
			return ptr->get<T>();
		}

		static Object* BoxImpl(Class* klass, void* value);
		/**
		 * @brief Transforma um tipo de valor em um objeto (Boxing).
		 * Necessário para passar tipos primitivos em funções que esperam 'object'.
		 */
		template <typename T>
		static Object* Box(Class* klass, const T& value) {
			return BoxImpl(klass, &value);
		}
	};

	struct Array : Object {
		uint32_t GetLength();
		uint32_t GetByteLength();
		Class* BoundedClassGet(Class* elementClass, uint32_t rank, bool bounded);

		static int GetElementSize(Class* klass);
		static Class* ClassGet(Class* elementClass, uint32_t rank);
		static Array* New(Class* elementTypeInfo, Array_size_t length);
		static Array* NewSpecific(Class* arrayTypeInfo, Array_size_t length);
		static Array* NewFull(Class* array_class, std::span<Array_size_t> lengths, std::span<Array_size_t> lower_bounds);
		Pointer* GetRawAddress();
		template <typename T>
		T GetAt(uint32_t index) {
			Pointer* elementPtr = reinterpret_cast<Pointer*>(
				(uintptr_t)GetRawAddress() + (index * sizeof(T))
			);

			
			return elementPtr->get<T>();
		}
		void SetAtGeneric(uint32_t index, Pointer* valuePtr, size_t elementSize);

		template <typename T>
		void SetAt(uint32_t index, const T& value) {
			Pointer* ref = Pointer::ToPointer(value);

			SetAtGeneric(index, ref, sizeof(T));
		}

		template <typename T>
		T* begin() { return static_cast<T*>(GetRawAddress()); }

		template <typename T>
		T* end() { return begin<T>() + GetLength(); }

		template <typename T>
		std::vector<T> ToVector() {
			uint32_t len = GetLength();
			if (len == 0) return {};
			T* start = static_cast<T*>(GetRawAddress());
			return std::vector<T>(start, start + len);
		}

		template <typename T>
		std::span<T> AsSpan() {
			return std::span<T>(static_cast<T*>(GetRawAddress()), GetLength());
		}

		bool BoundsCheck(uint32_t index);

		bool IsEmpty();

		template <typename T>
		T& operator[](uint32_t index) { return GetAt<T>(index); }

		template<typename T>
		uint32_t IndexOf(T value) {
			uint32_t len = GetLength();
			for (uint32_t i = 0; i < len; i++) {
				T currentItem = GetAt<T>(i); // Usa a versão segura acima
				if (currentItem == value) return i;
			}
			return -1;
		}


		template<typename T>
		bool Contains(T value) {
			return IndexOf(value) != -1;
		}
		template<typename T>
		void CopyFrom(std::span<T> src)
		{
			uint32_t count = std::min((uint32_t)src.size(), GetLength());
			std::copy(src.begin(), src.begin() + count, begin());
		}
		void Clear();
	};

	template <typename T>
	struct ArrayTyped : Array {

		T* GetRawAddress()
		{
			return (T*)Array::GetRawAddress();
		}

		T& operator[](uint32_t index) {
			return  Array::GetAt<T>(index);
		}
		T& GetAt(uint32_t index) {
			return  Array::GetAt<T>(index);
		}
		void SetAt(uint32_t index, T value) {

			Array::SetAt<T>(index, value);
		}

		T* begin() { return Array::begin<T>(); }
		T* end() { return Array::end<T>(); }

		std::span<T> AsSpan() {
			return Array::AsSpan<T>();
		}

		std::vector<T> ToVector() {
			return Array::ToVector<T>();
		}

		uint32_t IndexOf(T value) {
			
			return Array::IndexOf(value); 
		}
		bool Contains(T value) {
			return Array::Contains(value);
		}
		void CopyFrom(std::span<T> src)
		{
			Array::CopyFrom(src);
		}
	};

	struct Assembly {
		const Image* GetImage() const;
	};

	struct Stats {
		static bool DumpToFile(const char* path) {
			return il2cpp_stats_dump_to_file(path);
		}

		static uint64_t GetValue(Stat stat) {
			return il2cpp_stats_get_value(stat);
		}

	};

	struct Exception : Object {
		void Raise();

		static Exception* FromNameMsg(const Image* image, const char* name_space, const char* name, const char* msg);

		static Exception* ArgumentNull(const char* arg);

		// Retorna a mensagem amigável da exceção
		std::string getMessage() const;

		std::string GetStackTrace() const;

		void Unhandled();

		NativeStackTrace GetNativeStackTrace() const;

		std::string ToString() const;
	};

	struct Field : Pointer {
		Class* GetParent();
		size_t GetOffset();
		const Type* GetType();
		int GetFlags();
		bool IsLiteral();

		bool HasAttribute(Class* attr_class);
		void GetValueImpl(Object* obj,void* val);

		template <typename T>
		T GetValue(Object* obj) {
			T val{};
			Pointer* ref = Pointer::ToPointer(val);
			GetValueImpl(obj, ref);
			return val;
		}

		void SetValueImpl(Object* obj, void* val);

		template <typename T>
		void SetValue(Object* obj, T&& value) {

			Pointer* ref = Pointer::ToPointer(value);
			SetValueImpl(obj, ref);
		}

		Object* GetValueObject(Object* obj);

		void SetValueObject(Object* obj, Object* value);

		// --- Métodos Estáticos (Get/Set) ---

		void GetStaticValueImpl(void* val);
		template <typename T>
		T GetStaticValue() {
			T val{};
			Pointer* ref = Pointer::ToPointer(val);

			GetStaticValueImpl(ref);
			return val;
		}
		void SetStaticValueImpl(void* val);

		template <typename T>
		void SetStaticValue(T&& value) {
			Pointer* ref = Pointer::ToPointer(value);
			SetStaticValueImpl(ref);
		}

		// --- Reflexão ---
		ReflectionField* GetReflectionObject(Class* refclass);
		

		static const Field* FromReflection(ReflectionField* reflectionField);
	};

	struct GC {
		static void Collect(int maxGenerations);
		static int32_t CollectALittle();
		static void StartIncrementalCollection();
		static void Disable();
		static void Enable();
		static bool IsDisabled();
		static void SetMode(GCMode mode);

		static int64_t GetMaxTimeSliceNs();
		static void SetMaxTimeSliceNs(int64_t ns);
		static bool IsIncremental();

		static int64_t GetUsedSize();
		static int64_t GetHeapSize();

		static void WriteBarrierSetField(Object* obj, void** targetAddress, void* value);

		// Stop-the-world: Pausa todas as threads do Unity
		static void StopWorld();
		static void StartWorld();

		
		// Versão amigável do Iterador do Heap
		template <typename F>
		static void ForeachObject(F&& callback) {
			auto invoker = [](void* data, void* userData) {
				(*static_cast<F*>(userData))(static_cast<Object*>(data));
				};
			il2cpp_gc_foreach_heap(invoker, &callback);
		}
	};
	struct GCPointerFixed : Pointer {
		GCPointerFixed* Alloc(size_t size);
		void Free();
	};


	struct GCHandle : Pointer{
		
		
		static GCHandle* New(Object* obj, bool pinned = false);

		static GCHandle* NewWeak(Object* obj, bool track_resurrection = false);

		Object* GetTarget() const;

		void Free();

		template <typename F>
		static void ForeachTarget(F&& callback) {
			auto invoker = [](void* obj, void* userData) {
				(*static_cast<F*>(userData))(static_cast<Object*>(obj));
				};
			il2cpp_gchandle_foreach_get_target(invoker, &callback);
		}
	};

	struct VMRuntimeInfo {
		static uint32_t GetObjectHeaderSize();

		static uint32_t GetArrayHeaderSize();

		static uint32_t GetArrayLengthOffset();

		static uint32_t GetArrayBoundsOffset();

		static uint32_t GetAllocationGranularity();
	};


	struct Liveness: Pointer {

		
		static Liveness* Begin(Class* filter, int maxObjectCount, LivenessRegisterCallback callback, void* userdata);

		void FromRoot(Object* root);

		void FromStatics();

		void Finalize();

		void Free();
	};
	struct Method : Pointer {
		const char* GetName() const;
		Class* GetDeclaringType() const;
		Class* GetClass() const;
		const Type* GetReturnType() const;
		uint32_t GetToken() const;

		// Flags de Método (Public, Private, Static, etc)
		MethodFlags GetFlags() const;

		// Informações de Estado
		bool IsGeneric() const;
		bool IsInflated() const;
		bool IsInstance() const;

		// Gerenciamento de Parâmetros
		uint32_t GetParamCount() const;

		const Type* GetParamType(uint32_t index) const;

		const char* GetParamName(uint32_t index) const;

		bool HasAttribute(Class* attr_class) const;

		// Reflexão (System.Reflection.MethodInfo)
		ReflectionMethod* GetReflectionObject(Class* refclass = nullptr) const;

		static const Method* FromReflection(const ReflectionMethod* reflectionMethod);

		bool IsStatic() const;
		std::string GetFullName() const;
		void* GetNativePointer() const;

		std::vector<ParameterInfo> GetParameters() const;

		Pointer* Invoke(Pointer* obj, std::span<Pointer*> args, Exception** exc = nullptr);

		/**
		 * @brief Helper template para invocar métodos de forma mais simples usando std::array.
		 */
		template <typename TObj, typename... Args>
		Pointer* InvokeSafe(TObj&& obj, Exception** exc, Args&&... args) {
			// 1. Definimos o tamanho do array em tempo de compilação
			constexpr std::size_t numArgs = sizeof...(Args);

			Pointer* that = Pointer::ToPointer(obj);

			if constexpr (numArgs > 0) {
				// 2. Criamos o array na stack
				std::array<Pointer*, numArgs> params;

				// 3. Preenchemos o array usando uma Fold Expression e um índice auxiliar
				std::size_t i = 0;
				((params[i++] = Pointer::ToPointer(args)), ...);

				// 4. Chamamos o Invoke (ajuste o Invoke para aceitar std::array ou use data())
				return Invoke(that, params, exc);
			}
			else {
				// Caso não haja argumentos
				return Invoke(that, nullptr, 0, exc);
			}
		}

		/** * @brief Helper template para invocar métodos lançando exceção em caso de erro.
 */
		template <typename TObj, typename... Args>
		Pointer* InvokeUnsafe(TObj&& obj, Args&&... args) {
			constexpr std::size_t numArgs = sizeof...(Args);

			// Criamos um ponteiro local para capturar a exceção do sistema interno
			Exception* exc = nullptr;
			Pointer* result = nullptr;

			Pointer* that = Pointer::ToPointer(std::forward<TObj>(obj));

			if constexpr (numArgs > 0) {
				std::array<Pointer*, numArgs> params;
				std::size_t i = 0;
				((params[i++] = Pointer::ToPointer(std::forward<Args>(args))), ...);

				result = Invoke(that, params.data(), numArgs, &exc);
			}
			else {
				result = Invoke(that, nullptr, 0, &exc);
			}

			// Se 'exc' não for nulo, algo deu errado no Invoke
			if (exc != nullptr) {
				// Supondo que sua classe Exception tenha um método para pegar a mensagem

				std::string errorMsg = exc->getMessage();

				// Opcional: liberar a memória da exceção antes de dar o throw
				// FreeException(exc); 

				throw std::runtime_error("Erro no InvokeUnsafe: " + errorMsg);
			}

			return result;
		}
	};

	struct Property : Pointer {
		const char* GetName() const;
		Class* GetParent() const;
		uint32_t GetFlags() const;

		// Retorna o método 'get' da propriedade (pode ser null)
		const Method* GetGetMethod() const;

		// Retorna o método 'set' da propriedade (pode ser null)
		const Method* GetSetMethod() const;

		// --- Helpers Amigáveis ---

		// Verifica se a propriedade pode ser lida
		bool CanRead() const;

		// Verifica se a propriedade pode ser escrita
		bool CanWrite() const;

		Pointer* GetValueImpl(Pointer* that = nullptr);

		template <typename TObj, typename T>
		T GetValue(TObj&& obj = nullptr) const {
			Pointer* refObj = Pointer::ToPointer(obj);
			
			Pointer* result = GetValueImpl(refObj);
			
			return result->get<T>();
		}

		// --- SetValue ---
		void SetValueImpl(Pointer* that, Pointer* value) const;

		template <typename TObj, typename T>
		void SetValue(TObj&& obj,  T&& value) {
			Pointer refValue = Pointer::ToPointer(value),
				refObj = Pointer::ToPointer(obj);
			
			// O método 'set' espera o valor como argumento
			SetValueImpl(refObj, refValue);
		}

		
	};

	
	struct Monitor : Object {
		void Enter();

		// Tenta entrar. Retorna true se conseguir, ou false se o timeout expirar
		bool TryEnter(uint32_t timeout_ms = 0);

		// Sai da seção crítica
		void Exit();

		// Notifica uma thread que está esperando por este objeto
		void Pulse();

		// Notifica todas as threads que estão esperando
		void PulseAll();

		// Aguarda até ser notificado (Pulse)
		void Wait();

		// Aguarda com tempo limite
		bool TryWait(uint32_t timeout_ms);

		// --- Helper RAII: Lock Automático ---
		struct LockGuard {
			Monitor* _obj;
			LockGuard(Object* obj);
			~LockGuard();
		};
	};

	struct Runtime {
		/**
		 * @brief Invoca um método de forma dinâmica.
		 * @param method O método a ser chamado.
		 * @param obj A instância (null se for estático).
		 * @param params Array de ponteiros para os argumentos.
		 * @param exc Ponteiro para capturar uma possível exceção do C#.
		 */
		static Object* Invoke(const Method* method, void* obj, void** params, Exception** exc = nullptr);

		/**
		 * @brief Invoca um método convertendo argumentos (útil para tipos primitivos boxeados).
		 */
		static Object* InvokeConvertArgs(const Method* method, void* obj, Object** params, int paramCount, Exception** exc = nullptr);

		// Inicializa os campos estáticos de uma classe (chama o cctor / construtor estático)
		static void ClassInit(Class* klass);

		// Chama o construtor padrão da instância (ctor)
		static void ObjectInit(Object* obj);

		// Chama o construtor da instância permitindo capturar exceções de inicialização
		static void ObjectInit(Object* obj, Exception** exc);

		// Define se o jogo deve crashar ou tentar continuar ao encontrar uma exceção não tratada
		static void SetUnhandledExceptionPolicy(RuntimeUnhandledExceptionPolicy policy);
	};

	struct String : Object {
		// Retorna o número de caracteres (UTF-16)
		int32_t Length();

		// Retorna o ponteiro bruto para os caracteres UTF-16
		Char* Chars();

		// --- Métodos de Criação (Estáticos) ---

		static String* New(const char* str);

		static String* New(const char* str, uint32_t length);

		static String* NewUTF16(const Char* text, int32_t len);

		// Otimização: Interna a string na tabela global do runtime
		String* Intern();
		bool IsInterned();

		// --- Helpers de Conversão Amigáveis ---

		// Converte a string do C# para uma std::string (UTF-8) do C++
		std::string ToStdString();
	};

	struct Thread : Object {
		// Retorna a thread atual. Se for uma thread nativa não registrada, retorna null.
		static Thread* Current();

		/**
		 * @brief Registra a thread atual no Il2Cpp.
		 * ESSENCIAL: Chame isso logo no início de qualquer thread nativa que vá usar o Wrapper.
		 */
		static Thread* Attach(Domain* domain);
		/**
		 * @brief Desregistra a thread do Il2Cpp.
		 * Chame isso antes da sua thread nativa terminar o ciclo de vida.
		 */
		void Detach();

		// Verifica se esta thread pertence à Virtual Machine do Il2Cpp
		bool IsVMThread();
	};

	struct ScopedThreadAttacher {
		Thread* _thread;
		ScopedThreadAttacher(Domain* domain);
		~ScopedThreadAttacher();
	};
	struct StackFrameInfo : Pointer {};

	struct StackTrace : Thread {
		/**
		 * @brief Percorre toda a pilha de chamadas da thread atual.
		 * @param callback Uma função ou lambda: [](const StackFrameInfo* frame) { ... }
		 */
		template <typename F>
		static void WalkCurrentThread(F&& callback) {
			auto invoker = [](const StackFrameInfo* info, void* user_data) {
				(*static_cast<F*>(user_data))(info);
				};
			il2cpp_current_thread_walk_frame_stack(invoker, &callback);
		}

		/**
		 * @brief Percorre a pilha de uma thread específica.
		 */
		template <typename F>
		void WalkThread(F&& callback) {
			auto invoker = [](const StackFrameInfo* info, void* user_data) {
				(*static_cast<F*>(user_data))(info);
				};
			il2cpp_thread_walk_frame_stack(this, invoker, &callback);
		}

		// Obtém a função que está sendo executada no topo da pilha agora
		static bool GetCurrentTopFrame(StackFrameInfo* frame);

		bool GetTopFrame(StackFrameInfo* frame);
		// Obtém um frame em uma profundidade específica (0 é o topo)
		static bool GetCurrentFrameAt(int32_t offset, StackFrameInfo* frame);

		bool GetFrameAt(int32_t offset, StackFrameInfo* frame);

		// Retorna quantos métodos estão na pilha de chamadas
		int32_t GetDepth();
		static int32_t GetCurrentDepth();

		/**
		 * @brief Redireciona como o Il2Cpp gera backtraces.
		 * Útil para esconder seus próprios hooks do sistema de crash log do jogo.
		 */
		static void OverrideBacktrace(BacktraceFunc func);
	};

	struct Type : Pointer {
		// Retorna o objeto de reflexão (System.Type)
		Object* getObject() const;

		// Retorna o enum do tipo (corresponde ao CorElementType do .NET)
		int GetTypeEnum() const;

		// Retorna a Classe associada ou a classe do elemento (se for array/ponteiro)
		Class* GetClass() const;
		// Nome simples do tipo
		std::string GetName() const;

		// Nome completo para Reflexão (Namespace.Class)
		std::string GetReflectionName() const;
		// Nome qualificado pelo Assembly (Namespace.Class, AssemblyName)
		std::string GetAssemblyQualifiedName() const;

		// Checagem de Atributos e Estados
		uint32_t GetAttrs() const;
		bool IsByRef() const;
		bool IsStatic() const;
		bool IsPointer() const;

		// Comparação de igualdade entre tipos
		bool Equals(const Type* other) const;
	};

	struct Image : Pointer {
		// Retorna o Assembly ao qual esta imagem pertence
		const Assembly* GetAssembly();

		// Nome interno do módulo (ex: "Assembly-CSharp")
		const char* GetName();

		// Caminho completo ou nome do arquivo no disco
		const char* GetFileName();

		// O método principal (Main) se houver (geralmente nulo em DLLs)
		const Method* GetEntryPoint();
		// --- Navegação de Classes ---

		size_t GetClassCount();

		const Class* GetClass(size_t index);

		// Helper amigável para obter todas as classes do módulo
		std::vector<const Class*> GetClasses();
		template <typename F>
		void ForEachClass(F&& callback)
		{
			size_t count = GetClassCount();
			for (size_t i = 0; i < count; i++) {
				callback(GetClass(i));
			}
		}

		static const Image* getCorlib();
		

	};

	struct MemoryInformation: Pointer {
		/**
		 * @brief Tira uma foto instantânea de toda a memória gerenciada.
		 * Útil para analisar vazamentos de memória ou encontrar objetos específicos.
		 */
		static MemoryInformation* New();

		/**
		 * @brief Libera a memória alocada pelo snapshot.
		 */
		void Free();

		/**
		 * @brief Define o callback para quando o Unity tenta encontrar um plugin nativo.
		 */
		static void SetFindPluginCallback(FindPluginCallback callback);
	};

	struct Logging {
		/**
		 * @brief Registra um callback para receber logs do sistema Il2Cpp.
		 */
		static void RegisterCallback(LogCallback callback);
	};

	struct Debugger {
		/**
		 * @brief Define opções de inicialização do agente de debug.
		 * Exemplo: "address=127.0.0.1:56473,transport=dt_socket,server=y,suspend=n"
		 */
		static void SetAgentOptions(const char* options);

		/**
		 * @brief Verifica se existe um debugger (como o do Unity Editor) conectado ao processo.
		 */
		static bool IsAttached();
		/**
		 * @brief Registra um transporte customizado para os dados do debugger.
		 */
		static void RegisterTransport(DebuggerTransport* transport);
	};

	struct DebugMetadata {
		/**
		 * @brief Tenta obter informações de depuração de um método.
		 * @return true se as informações estiverem disponíveis (geralmente requer um arquivo .pdb ou metadados de debug).
		 */
		static bool GetMethodInfo(const Method* method, MethodDebugInfo* debugInfo);
	};
	struct TLSModule {
		/**
		 * @brief Instala a interface de TLS do Unity.
		 * @param unitytlsInterfaceStruct Ponteiro para a estrutura de funções do UnityTLS.
		 */
		static void InstallInterface(const void* unitytlsInterfaceStruct);
	};

	struct CustomAttribute : Pointer {

		void Free();

		// --- Fábricas Estáticas ---

		static CustomAttribute* FromClass(Class* klass);

		static CustomAttribute* FromMethod(const Method* method);

		static CustomAttribute* FromField(const Field* field);

		// --- Métodos de Instância ---

		// Verifica se possui um atributo específico
		bool Has(Class* attrKlass);

		// Obtém a instância do atributo (boxing para Object)
		Object* Get(Class* attrKlass);

		// Constrói todos os atributos em um Array do Il2Cpp
		Array* ConstructAll();
	};

	struct ClassUserData: Pointer {
		/**
		 * @brief Atribui dados customizados a uma classe.
		 * Útil para sistemas de cache ou identificadores rápidos.
		 */
		void SetData(Class* klass);

		/**
		 * @brief Retorna o offset na memória onde o userdata está armazenado.
		 * Permite leitura direta via ponteiro para máxima performance.
		 */
		static int GetOffset();
	};

	struct ThreadAffinity {
		/**
		 * @brief Define a máscara de afinidade padrão para novas threads.
		 * @param affinity_mask Máscara de bits (ex: 0x0F para usar os primeiros 4 núcleos).
		 */
		static void SetDefault(int64_t affinity_mask);
	};

	struct AndroidNetwork {
		/**
		 * @brief Registra um callback para monitorar o estado da rede no Android.
		 */
		static void SetUpStateCallback(AndroidUpStateFunc func);
	};

	struct ClassBitmap : Class {
		/**
		 * @brief Retorna o tamanho necessário para armazenar o bitmap da classe.
		 * O tamanho é retornado em número de bits ou palavras, dependendo da versão.
		 */
		size_t GetSize();
		/**
		 * @brief Preenche um buffer com o bitmap de layout de memória da classe.
		 * @param klass A classe a ser analisada.
		 * @param bitmap_out Ponteiro para um array de size_t que receberá os dados.
		 */
		void GetBitmap(size_t* bitmap_out);

		/**
		 * @brief Helper para obter o bitmap completo em um std::vector.
		 */
		std::vector<size_t> GetFullBitmap();
	};

	struct InternalCall {
		/**
		 * @brief Registra uma função nativa C++ para ser chamada pelo C#.
		 * No C#, a função deve ser declarada como: [MethodImpl(MethodImplOptions.InternalCall)] static extern void MinhaFuncao();
		 * @param signature O nome completo da assinatura (ex: "UnityEngine.GameObject::Internal_CreateGameObject")
		 * @param functionPtr Ponteiro para a sua função estática em C++
		 */
		static void Add(const char* signature, void* functionPtr);

		/**
		 * @brief Localiza o endereço de uma função interna do Il2Cpp/Unity pelo nome.
		 * Útil para fazer hooks em funções que não estão expostas na vtable das classes.
		 * @param signature O nome da assinatura interna.
		 * @return Retorna o endereço da função ou nullptr se não encontrada.
		 */
		static void* Resolve(const char* signature);
		/**
		 * @brief Helper para resolver uma função e já atribuir a um ponteiro de função tipado.
		 */
		template <typename T>
		static T ResolveAs(const char* signature) {
			return reinterpret_cast<T>(Resolve(signature));
		}
	};
	struct Program {

		static int Init(char* domain_name);
		static int InitUtf16(const Char* domain_name);
		static void Shutdown();
		
	};

	struct Paths
	{
		static void SetConfigDir(const char* config_path);
		static void SetDataDir(const char* data_path);

		static void SetTempDir(const char* temp_path);

	};

	struct Config
	{
		static void SetConfig(const char* executablePath);
		static void SetConfigUtf16(const Char* executablePath);
	};

	struct CommandLine
	{
		static void SetArguments(int argc, const char* const argv[], const char* basedir);

		/**
		 * @brief Define os argumentos de linha de comando usando UTF-16.
		 * Útil para manter a paridade com nomes de caminhos ou argumentos que contenham caracteres especiais.
		 */
		static void SetArgumentsUTF16(int argc, const Char* const argv[], const char* basedir);

		/**
		 * @brief Helper para definir argumentos a partir de um std::vector de strings nativas.
		 */
		static void SetArguments(const std::vector<std::string>& args, const std::string& basedir);
	};
	struct MemoryCallbacks: Pointer {
		void Set();
	};

	template <typename T>
	void ValueToPointer(Pointer*& ptr, const T& value)
	{
		if constexpr (std::is_pointer_v<T>  || std::is_same_v<T, std::nullptr_t>) {
			using NonConstT = std::add_pointer_t<std::remove_cv_t<std::remove_pointer_t<T>>>;
			ptr = reinterpret_cast<Pointer*>(const_cast<NonConstT>(value));
		}
		else {
			using NonConstT = std::remove_cv_t<T>;
			ptr = reinterpret_cast<Pointer*>(const_cast<NonConstT*>(&value));
		}
	}


	
	template <typename T>
	void PointerToValue(const Pointer* ptr, T& value)
	{

		if constexpr (std::is_same_v<T, bool>) {
			
			uint8_t temp = (*reinterpret_cast<const uint8_t*>(ptr)) & 0x1;
			value = (temp != 0);
		}
		else if constexpr (std::is_pointer_v<T> || std::is_same_v<T, std::nullptr_t>) {
			value = reinterpret_cast<T>(const_cast<Pointer*>(ptr));
		}
		else {
			value = *reinterpret_cast<const T*>(ptr);
		}
	}



	/**
	 * @brief RAII Guard para MemoryInformation
	 * Libera automaticamente o snapshot ao sair do escopo
	 */
	struct MemoryInformationGuard {
		MemoryInformation* ptr;

		MemoryInformationGuard();

		explicit MemoryInformationGuard(MemoryInformation* p);

		MemoryInformationGuard(const MemoryInformationGuard&) = delete;
		MemoryInformationGuard& operator=(const MemoryInformationGuard&) = delete;

		MemoryInformationGuard(MemoryInformationGuard&& other) noexcept;

		MemoryInformationGuard& operator=(MemoryInformationGuard&& other) noexcept;

		~MemoryInformationGuard();

		MemoryInformation* get() const;
		MemoryInformation* operator->() const;
		MemoryInformation& operator*() const;

		MemoryInformation* release();
		

		void reset(MemoryInformation* p = nullptr);

		explicit operator bool() const;
	};

	/**
	 * @brief RAII Guard para CustomAttribute
	 * Libera automaticamente os atributos ao sair do escopo
	 */
	struct CustomAttributeGuard {
		CustomAttribute* ptr;

		CustomAttributeGuard();

		explicit CustomAttributeGuard(CustomAttribute* p);

		CustomAttributeGuard(const CustomAttributeGuard&) = delete;
		CustomAttributeGuard& operator=(const CustomAttributeGuard&) = delete;

		CustomAttributeGuard(CustomAttributeGuard&& other) noexcept;

		CustomAttributeGuard& operator=(CustomAttributeGuard&& other) noexcept;

		~CustomAttributeGuard();

		CustomAttribute* get() const;
		CustomAttribute* operator->() const;
		CustomAttribute& operator*() const;

		CustomAttribute* release();

		void reset(CustomAttribute* p = nullptr);

		explicit operator bool() const;
	};

	/**
	 * @brief RAII Guard para ManagedPointer
	 * Libera automaticamente a memória gerenciada ao sair do escopo
	 */
	struct ManagedPointerGuard {
		ManagedPointer* ptr;

		ManagedPointerGuard();

		explicit ManagedPointerGuard(ManagedPointer* p);

		ManagedPointerGuard(const ManagedPointerGuard&) = delete;
		ManagedPointerGuard& operator=(const ManagedPointerGuard&) = delete;

		ManagedPointerGuard(ManagedPointerGuard&& other) noexcept;

		ManagedPointerGuard& operator=(ManagedPointerGuard&& other) noexcept;

		~ManagedPointerGuard();

		ManagedPointer* get() const;
		ManagedPointer* operator->() const;

		template <typename T>
		T* as() const { return ptr->as<T>(); }

		ManagedPointer* release();

		void reset(ManagedPointer* p = nullptr);

		explicit operator bool() const;
	};

	/**
	 * @brief RAII Guard para GCPointerFixed
	 * Libera automaticamente o ponteiro fixo ao sair do escopo
	 */
	struct GCPointerFixedGuard {
		GCPointerFixed* ptr;

		GCPointerFixedGuard();

		explicit GCPointerFixedGuard(GCPointerFixed* p);

		GCPointerFixedGuard(const GCPointerFixedGuard&) = delete;
		GCPointerFixedGuard& operator=(const GCPointerFixedGuard&) = delete;

		GCPointerFixedGuard(GCPointerFixedGuard&& other) noexcept;

		GCPointerFixedGuard& operator=(GCPointerFixedGuard&& other) noexcept;

		~GCPointerFixedGuard();

		GCPointerFixed* get() const;
		GCPointerFixed* operator->() const;

		template <typename T>
		T* as() const { return ptr->as<T>(); }

		GCPointerFixed* release();

		void reset(GCPointerFixed* p = nullptr);

		explicit operator bool() const;
	};

	/**
	 * @brief RAII Guard para GCHandle
	 * Libera automaticamente o handle ao sair do escopo
	 */
	struct GCHandleGuard {
		GCHandle* ptr;

		GCHandleGuard();

		explicit GCHandleGuard(GCHandle* p);

		GCHandleGuard(const GCHandleGuard&) = delete;
		GCHandleGuard& operator=(const GCHandleGuard&) = delete;

		GCHandleGuard(GCHandleGuard&& other) noexcept;

		GCHandleGuard& operator=(GCHandleGuard&& other) noexcept;

		~GCHandleGuard();

		GCHandle* get() const;
		GCHandle* operator->() const;

		Object* GetTarget() const;

		GCHandle* release();

		void reset(GCHandle* p = nullptr);

		explicit operator bool() const;
	};

	/**
	 * @brief RAII Guard para Liveness
	 * Libera automaticamente os dados de liveness ao sair do escopo
	 */
	struct LivenessGuard {
		Liveness* ptr;

		LivenessGuard();

		explicit LivenessGuard(Liveness* p);

		LivenessGuard(const LivenessGuard&) = delete;
		LivenessGuard& operator=(const LivenessGuard&) = delete;

		LivenessGuard(LivenessGuard&& other) noexcept;

		LivenessGuard& operator=(LivenessGuard&& other) noexcept;

		~LivenessGuard();

		Liveness* get() const;
		Liveness* operator->() const;

		void FromRoot(Object* root);

		void FromStatics();

		void Finalize();

		Liveness* release();

		void reset(Liveness* p = nullptr);

		explicit operator bool() const;
	};

}