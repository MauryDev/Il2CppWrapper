#include "Il2CppWrapper.h"
namespace Il2CppWrapper {
    void Initialize(Core::Callbacks& callbacks)
    {
        Il2CppWrapper::callbacks = callbacks;
        auto gameAssembly = callbacks.fn_GetModule("GameAssembly.dll");
#define LOAD_API(name) name = reinterpret_cast<decltype(name)>(callbacks.fn_GetProcAddr(gameAssembly,#name))

        LOAD_API(il2cpp_init);
        LOAD_API(il2cpp_init_utf16);
        LOAD_API(il2cpp_shutdown);
        LOAD_API(il2cpp_set_config_dir);
        LOAD_API(il2cpp_set_data_dir);
        LOAD_API(il2cpp_set_temp_dir);
        LOAD_API(il2cpp_set_commandline_arguments);
        LOAD_API(il2cpp_set_commandline_arguments_utf16);
        LOAD_API(il2cpp_set_config_utf16);
        LOAD_API(il2cpp_set_config);

        LOAD_API(il2cpp_set_memory_callbacks);
        LOAD_API(il2cpp_get_corlib);
        LOAD_API(il2cpp_add_internal_call);
        LOAD_API(il2cpp_resolve_icall);
        LOAD_API(il2cpp_alloc);
        LOAD_API(il2cpp_free);


        LOAD_API(il2cpp_array_class_get);
        LOAD_API(il2cpp_array_length);
        LOAD_API(il2cpp_array_get_byte_length);
        LOAD_API(il2cpp_array_new);
        LOAD_API(il2cpp_array_new_specific);
        LOAD_API(il2cpp_array_new_full);
        LOAD_API(il2cpp_bounded_array_class_get);
        LOAD_API(il2cpp_array_element_size);

        LOAD_API(il2cpp_assembly_get_image);

        LOAD_API(il2cpp_class_for_each);
        LOAD_API(il2cpp_class_enum_basetype);
        LOAD_API(il2cpp_class_is_inited);
        LOAD_API(il2cpp_class_is_generic);
        LOAD_API(il2cpp_class_is_inflated);
        LOAD_API(il2cpp_class_is_assignable_from);
        LOAD_API(il2cpp_class_is_subclass_of);
        LOAD_API(il2cpp_class_has_parent);
        LOAD_API(il2cpp_class_from_il2cpp_type);
        LOAD_API(il2cpp_class_from_name);
        LOAD_API(il2cpp_class_from_system_type);
        LOAD_API(il2cpp_class_get_element_class);
        LOAD_API(il2cpp_class_get_events);
        LOAD_API(il2cpp_class_get_fields);
        LOAD_API(il2cpp_class_get_nested_types);
        LOAD_API(il2cpp_class_get_interfaces);
        LOAD_API(il2cpp_class_get_properties);
        LOAD_API(il2cpp_class_get_property_from_name);
        LOAD_API(il2cpp_class_get_field_from_name);
        LOAD_API(il2cpp_class_get_methods);
        LOAD_API(il2cpp_class_get_method_from_name);
        LOAD_API(il2cpp_class_get_name);
        LOAD_API(il2cpp_class_get_namespace);
        LOAD_API(il2cpp_class_get_parent);
        LOAD_API(il2cpp_class_get_declaring_type);
        LOAD_API(il2cpp_class_instance_size);
        LOAD_API(il2cpp_class_num_fields);
        LOAD_API(il2cpp_class_is_valuetype);
        LOAD_API(il2cpp_class_value_size);
        LOAD_API(il2cpp_class_is_blittable);
        LOAD_API(il2cpp_class_get_flags);
        LOAD_API(il2cpp_class_is_abstract);
        LOAD_API(il2cpp_class_is_interface);
        LOAD_API(il2cpp_class_array_element_size);
        LOAD_API(il2cpp_class_get_type);
        LOAD_API(il2cpp_class_get_type_token);
        LOAD_API(il2cpp_class_has_attribute);
        LOAD_API(il2cpp_class_has_references);
        LOAD_API(il2cpp_class_is_enum);
        LOAD_API(il2cpp_class_get_image);
        LOAD_API(il2cpp_class_get_assemblyname);
        LOAD_API(il2cpp_class_get_rank);
        LOAD_API(il2cpp_class_get_data_size);
        LOAD_API(il2cpp_class_get_static_field_data);

        LOAD_API(il2cpp_stats_dump_to_file);
        LOAD_API(il2cpp_stats_get_value);

        LOAD_API(il2cpp_domain_get);
        LOAD_API(il2cpp_domain_assembly_open);
        LOAD_API(il2cpp_domain_get_assemblies);

        LOAD_API(il2cpp_raise_exception);
        LOAD_API(il2cpp_exception_from_name_msg);
        LOAD_API(il2cpp_get_exception_argument_null);
        LOAD_API(il2cpp_format_exception);
        LOAD_API(il2cpp_format_stack_trace);
        LOAD_API(il2cpp_unhandled_exception);
        LOAD_API(il2cpp_native_stack_trace);

        LOAD_API(il2cpp_gc_collect);
        LOAD_API(il2cpp_gc_collect_a_little);
        LOAD_API(il2cpp_gc_start_incremental_collection);
        LOAD_API(il2cpp_gc_disable);
        LOAD_API(il2cpp_gc_enable);
        LOAD_API(il2cpp_gc_is_disabled);
        LOAD_API(il2cpp_gc_set_mode);
        LOAD_API(il2cpp_gc_get_max_time_slice_ns);
        LOAD_API(il2cpp_gc_set_max_time_slice_ns);
        LOAD_API(il2cpp_gc_is_incremental);
        LOAD_API(il2cpp_gc_get_used_size);
        LOAD_API(il2cpp_gc_get_heap_size);
        LOAD_API(il2cpp_gc_wbarrier_set_field);
        LOAD_API(il2cpp_gc_has_strict_wbarriers);
        LOAD_API(il2cpp_gc_set_external_allocation_tracker);
        LOAD_API(il2cpp_gc_set_external_wbarrier_tracker);
        LOAD_API(il2cpp_gc_foreach_heap);
        LOAD_API(il2cpp_stop_gc_world);
        LOAD_API(il2cpp_start_gc_world);
        LOAD_API(il2cpp_gc_alloc_fixed);
        LOAD_API(il2cpp_gc_free_fixed);

        LOAD_API(il2cpp_gchandle_new);
        LOAD_API(il2cpp_gchandle_new_weakref);
        LOAD_API(il2cpp_gchandle_get_target);
        LOAD_API(il2cpp_gchandle_free);
        LOAD_API(il2cpp_gchandle_foreach_get_target);


        LOAD_API(il2cpp_object_header_size);
        LOAD_API(il2cpp_array_object_header_size);
        LOAD_API(il2cpp_offset_of_array_length_in_array_object_header);
        LOAD_API(il2cpp_offset_of_array_bounds_in_array_object_header);
        LOAD_API(il2cpp_allocation_granularity);

        LOAD_API(il2cpp_unity_liveness_allocate_struct);
        LOAD_API(il2cpp_unity_liveness_calculation_from_root);
        LOAD_API(il2cpp_unity_liveness_calculation_from_statics);
        LOAD_API(il2cpp_unity_liveness_finalize);
        LOAD_API(il2cpp_unity_liveness_free_struct);

        LOAD_API(il2cpp_method_get_return_type);
        LOAD_API(il2cpp_method_get_declaring_type);
        LOAD_API(il2cpp_method_get_name);
        LOAD_API(il2cpp_method_get_from_reflection);
        LOAD_API(il2cpp_method_get_object);
        LOAD_API(il2cpp_method_is_generic);
        LOAD_API(il2cpp_method_is_inflated);
        LOAD_API(il2cpp_method_is_instance);
        LOAD_API(il2cpp_method_get_param_count);
        LOAD_API(il2cpp_method_get_param);
        LOAD_API(il2cpp_method_get_class);
        LOAD_API(il2cpp_method_has_attribute);
        LOAD_API(il2cpp_method_get_flags);
        LOAD_API(il2cpp_method_get_token);
        LOAD_API(il2cpp_method_get_param_name);

        LOAD_API(il2cpp_property_get_flags);
        LOAD_API(il2cpp_property_get_get_method);
        LOAD_API(il2cpp_property_get_set_method);
        LOAD_API(il2cpp_property_get_name);
        LOAD_API(il2cpp_property_get_parent);

        LOAD_API(il2cpp_object_get_class);
        LOAD_API(il2cpp_object_get_size);
        LOAD_API(il2cpp_object_get_virtual_method);
        LOAD_API(il2cpp_object_new);
        LOAD_API(il2cpp_object_unbox);
        LOAD_API(il2cpp_value_box);

        LOAD_API(il2cpp_monitor_enter);
        LOAD_API(il2cpp_monitor_try_enter);
        LOAD_API(il2cpp_monitor_exit);
        LOAD_API(il2cpp_monitor_pulse);
        LOAD_API(il2cpp_monitor_pulse_all);
        LOAD_API(il2cpp_monitor_wait);
        LOAD_API(il2cpp_monitor_try_wait);

        LOAD_API(il2cpp_runtime_invoke);
        LOAD_API(il2cpp_runtime_invoke_convert_args);
        LOAD_API(il2cpp_runtime_class_init);
        LOAD_API(il2cpp_runtime_object_init);
        LOAD_API(il2cpp_runtime_object_init_exception);
        LOAD_API(il2cpp_runtime_unhandled_exception_policy_set);

        LOAD_API(il2cpp_string_length);
        LOAD_API(il2cpp_string_chars);
        LOAD_API(il2cpp_string_new);
        LOAD_API(il2cpp_string_new_len);
        LOAD_API(il2cpp_string_new_utf16);
        LOAD_API(il2cpp_string_new_wrapper);
        LOAD_API(il2cpp_string_intern);
        LOAD_API(il2cpp_string_is_interned);

        LOAD_API(il2cpp_thread_current);
        LOAD_API(il2cpp_thread_attach);
        LOAD_API(il2cpp_thread_detach);
        LOAD_API(il2cpp_is_vm_thread);

        LOAD_API(il2cpp_current_thread_walk_frame_stack);
        LOAD_API(il2cpp_thread_walk_frame_stack);
        LOAD_API(il2cpp_current_thread_get_top_frame);
        LOAD_API(il2cpp_thread_get_top_frame);
        LOAD_API(il2cpp_current_thread_get_frame_at);
        LOAD_API(il2cpp_thread_get_frame_at);
        LOAD_API(il2cpp_current_thread_get_stack_depth);
        LOAD_API(il2cpp_thread_get_stack_depth);
        LOAD_API(il2cpp_override_stack_backtrace);

        LOAD_API(il2cpp_type_get_object);
        LOAD_API(il2cpp_type_get_type);
        LOAD_API(il2cpp_type_get_class_or_element_class);
        LOAD_API(il2cpp_type_get_name);
        LOAD_API(il2cpp_type_is_byref);
        LOAD_API(il2cpp_type_get_attrs);
        LOAD_API(il2cpp_type_equals);
        LOAD_API(il2cpp_type_get_assembly_qualified_name);
        LOAD_API(il2cpp_type_get_reflection_name);
        LOAD_API(il2cpp_type_is_static);
        LOAD_API(il2cpp_type_is_pointer_type);

        LOAD_API(il2cpp_image_get_assembly);
        LOAD_API(il2cpp_image_get_name);
        LOAD_API(il2cpp_image_get_filename);
        LOAD_API(il2cpp_image_get_entry_point);
        LOAD_API(il2cpp_image_get_class_count);
        LOAD_API(il2cpp_image_get_class);

        LOAD_API(il2cpp_capture_memory_snapshot);
        LOAD_API(il2cpp_free_captured_memory_snapshot);
        LOAD_API(il2cpp_set_find_plugin_callback);

        LOAD_API(il2cpp_register_log_callback);

        LOAD_API(il2cpp_debugger_set_agent_options);
        LOAD_API(il2cpp_is_debugger_attached);
        LOAD_API(il2cpp_register_debugger_agent_transport);

        LOAD_API(il2cpp_debug_get_method_info);

        LOAD_API(il2cpp_unity_install_unitytls_interface);

        LOAD_API(il2cpp_custom_attrs_from_class);
        LOAD_API(il2cpp_custom_attrs_from_method);
        LOAD_API(il2cpp_custom_attrs_from_field);
        LOAD_API(il2cpp_custom_attrs_get_attr);
        LOAD_API(il2cpp_custom_attrs_has_attr);
        LOAD_API(il2cpp_custom_attrs_construct);
        LOAD_API(il2cpp_custom_attrs_free);

        LOAD_API(il2cpp_class_set_userdata);
        LOAD_API(il2cpp_class_get_userdata_offset);

        LOAD_API(il2cpp_set_default_thread_affinity);

        LOAD_API(il2cpp_unity_set_android_network_up_state_func);

        LOAD_API(il2cpp_class_get_bitmap_size);
        LOAD_API(il2cpp_class_get_bitmap);

        LOAD_API(il2cpp_field_get_flags);
        LOAD_API(il2cpp_field_get_from_reflection);
        LOAD_API(il2cpp_field_get_name);
        LOAD_API(il2cpp_field_get_parent);
        LOAD_API(il2cpp_field_get_object);
        LOAD_API(il2cpp_field_get_offset);
        LOAD_API(il2cpp_field_get_type);
        LOAD_API(il2cpp_field_get_value);
        LOAD_API(il2cpp_field_get_value_object);
        LOAD_API(il2cpp_field_has_attribute);
        LOAD_API(il2cpp_field_set_value);
        LOAD_API(il2cpp_field_static_get_value);
        LOAD_API(il2cpp_field_static_set_value);
        LOAD_API(il2cpp_field_set_value_object);
        LOAD_API(il2cpp_field_is_literal);

        LOAD_API(il2cpp_type_get_name_chunked);
        LOAD_API(il2cpp_class_from_type);

#undef LOAD_API
    }

    

    bool Pointer::isValid() const
    {
        return this != nullptr;
    }

    Pointer* Pointer::add(size_t offset) const
    {
        return reinterpret_cast<Pointer*>(reinterpret_cast<uintptr_t>(this) + offset);
    }
    Pointer* Pointer::operator[](size_t offset) const
    {
        return add(offset);
    }
    Pointer::operator bool() const
    {
        return isValid();
    }
    bool Pointer::operator!() const
    {
        return !isValid();
    }
    bool Pointer::operator==(const Pointer* other) const
    {
        return Equals(other);
    }
    bool Pointer::Equals(const Pointer* other) const
    {
        return this == other;
    }
    const Image* Image::getCorlib()
    {
        return il2cpp_get_corlib();
    }
    ManagedPointer* ManagedPointer::Alloc(size_t n)
    {
        return il2cpp_alloc(n);
    }
    ManagedPointer* ManagedPointer::Realloc(size_t n)
    {
        auto newPtr = Alloc(n);
        if (this->isValid() && newPtr->isValid()) {
            this->Free();
        }

        return newPtr;
    }
    void ManagedPointer::Free()
    {
        return il2cpp_free(this);
    }
    uint32_t Array::GetLength()
    {
        if (!this->isValid()) return 0;

        return il2cpp_array_length(this);
    }
    uint32_t Array::GetByteLength()
    {
        if (!this->isValid()) return 0;

        return il2cpp_array_get_byte_length(this);
    }
    int Array::GetElementSize(Class* klass)
    {
        return il2cpp_array_element_size(klass);
    }
    Class* Array::BoundedClassGet(Class* elementClass, uint32_t rank, bool bounded)
    {
        return il2cpp_bounded_array_class_get(elementClass, rank, bounded);
    }
    Class* Array::ClassGet(Class* elementClass, uint32_t rank)
    {
        return il2cpp_array_class_get(elementClass, rank);
    }
    Array* Array::New(Class* elementTypeInfo, Array_size_t length)
    {
        return il2cpp_array_new(elementTypeInfo, length);
    }
    Array* Array::NewSpecific(Class* arrayTypeInfo, Array_size_t length)
    {
        return il2cpp_array_new_specific(arrayTypeInfo, length);
    }
    Array* Array::NewFull(Class* array_class, std::span<Array_size_t> lengths, std::span<Array_size_t> lower_bounds)
    {

        if (lengths.size() != lower_bounds.size()) {
            return nullptr;
        }
        return il2cpp_array_new_full(array_class, lengths.data(), lower_bounds.data());
    }
    Pointer* Array::GetRawAddress()
    {
        if (!isValid()) return nullptr;

        const auto offset = sizeof(void*) * 4;
        return reinterpret_cast<Pointer*>(reinterpret_cast<uintptr_t>(this) + offset); // 32 é o offset padrão em x64    
    }
    bool Array::BoundsCheck(uint32_t index)
    {
        return index < GetLength();
    }
    bool Array::IsEmpty()
    {
        if (!isValid()) return true;
        return GetLength() == 0;
    }
    void Array::SetAtGeneric(uint32_t index, Pointer* valuePtr, size_t elementSize)
    {
        void* dest = (void*)((uintptr_t)GetRawAddress() + (index * elementSize));
        memcpy(dest, valuePtr, elementSize);
    }
    void Array::Clear()
    {
        auto data = GetRawAddress();
        if (data != nullptr)
            memset(data, 0, GetByteLength());
    }

    const Image* Assembly::GetImage() const
    {
        return il2cpp_assembly_get_image(this);
    }


    size_t Class::GetBitmapSize() const
    {
        return il2cpp_class_get_bitmap_size(this);
    }

    std::vector<size_t> Class::GetBitmap()
    {
        size_t size = GetBitmapSize();
        if (size == 0) return {};

        std::vector<size_t> bitmap(size);
        il2cpp_class_get_bitmap(this, bitmap.data());
        return bitmap;
    }

    void Class::ForEach(void(*klassReportFunc)(Class* klass, void* userData), void* userData)
    {
        il2cpp_class_for_each(klassReportFunc, userData);

    }
    const Type* Class::GetEnumBaseType() { return il2cpp_class_enum_basetype(this); }
    bool Class::IsInited() const { return il2cpp_class_is_inited(this); }
    bool Class::IsGeneric() const { return il2cpp_class_is_generic(this); }
    bool Class::IsInflated() const { return il2cpp_class_is_inflated(this); }
    bool Class::IsAssignableFrom(Class* oklass) { return il2cpp_class_is_assignable_from(this, oklass); }
    bool Class::IsSubclassOf(Class* klassc, bool check_interfaces) { return il2cpp_class_is_subclass_of(this, klassc, check_interfaces); }
    bool Class::HasParent(Class* klassc) { return il2cpp_class_has_parent(this, klassc); }
    Class* Class::FromIl2CppType(const Type* type) { return il2cpp_class_from_il2cpp_type(type); }
    Class* Class::FromName(const Image* image, const char* namespaze, const char* name) { return il2cpp_class_from_name(image, namespaze, name); }
    Class* Class::FromSystemType(ReflectionType* type) { return il2cpp_class_from_system_type(type); }
    Class* Class::GetElementClass() { return il2cpp_class_get_element_class(this); }

    const Event* Class::GetEvents(void** iter) { return il2cpp_class_get_events(this, iter); }
    std::vector<const Event*> Class::GetEventsList()
    {
        return CollectMetadata(&Class::GetEvents);
    }
    Field* Class::GetFields(void** iter) { return il2cpp_class_get_fields(this, iter); }
    std::vector<const Field*> Class::GetFieldsList()
    {
        return CollectMetadata(&Class::GetFields);

    }
    Class* Class::GetNestedTypes(void** iter) { return il2cpp_class_get_nested_types(this, iter); }
    std::vector<const Class*> Class::GetNestedTypesList()
    {
        return CollectMetadata(&Class::GetNestedTypes);
    }
    Class* Class::GetInterfaces(void** iter) { return il2cpp_class_get_interfaces(this, iter); }
    std::vector<const Class*> Class::GetInterfacesList()
    {
        return CollectMetadata(&Class::GetInterfaces);
    }
    const Property* Class::GetProperties(void** iter) { return il2cpp_class_get_properties(this, iter); }
    std::vector<const Property*> Class::GetPropertiesList()
    {
        return CollectMetadata(&Class::GetProperties);
    }
    const Method* Class::GetMethods(void** iter) { return il2cpp_class_get_methods(this, iter); }

    std::vector<const Method*> Class::GetMethodsList()
    {
        return CollectMetadata(&Class::GetMethods);
    }

    const Property* Class::GetPropertyFromName(const char* name) { return il2cpp_class_get_property_from_name(this, name); }
    Field* Class::GetFieldFromName(const char* name) { return il2cpp_class_get_field_from_name(this, name); }
    const Method* Class::GetMethodFromName(const char* name, int argsCount) { return il2cpp_class_get_method_from_name(this, name, argsCount); }

    const char* Class::GetName() { return il2cpp_class_get_name(this); }
    const char* Class::GetNamespace() { return il2cpp_class_get_namespace(this); }
    Class* Class::GetParent() { return il2cpp_class_get_parent(this); }
    Class* Class::GetDeclaringType() { return il2cpp_class_get_declaring_type(this); }
    int32_t Class::GetInstanceSize() { return il2cpp_class_instance_size(this); }
    size_t Class::GetNumFields() const { return il2cpp_class_num_fields(this); }
    bool Class::IsValueType() const { return il2cpp_class_is_valuetype(this); }
    ValueSize Class::GetValueSize() {

        uint32_t align = 0;
        auto size = il2cpp_class_value_size(this, &align);
        return { size, align };

    }
    bool Class::IsBlittable() const { return il2cpp_class_is_blittable(this); }
    int Class::GetFlags() const { return il2cpp_class_get_flags(this); }
    bool Class::IsAbstract() const { return il2cpp_class_is_abstract(this); }
    bool Class::IsInterface() const { return il2cpp_class_is_interface(this); }
    int Class::GetArrayElementSize() const { return il2cpp_class_array_element_size(this); }
    const Type* Class::GetType() { return il2cpp_class_get_type(this); }
    uint32_t Class::GetTypeToken() { return il2cpp_class_get_type_token(this); }
    bool Class::HasAttribute(Class* attr_class) { return il2cpp_class_has_attribute(this, attr_class); }
    bool Class::HasReferences() { return il2cpp_class_has_references(this); }
    bool Class::IsEnum() const { return il2cpp_class_is_enum(this); }
    const Image* Class::GetImage() { return il2cpp_class_get_image(this); }
    const char* Class::GetAssemblyName() const { return il2cpp_class_get_assemblyname(this); }
    int Class::GetRank() const { return il2cpp_class_get_rank(this); }
    uint32_t Class::GetDataSize() const { return il2cpp_class_get_data_size(this); }
    void* Class::GetStaticFieldData() const { return il2cpp_class_get_static_field_data(this); }

    bool Class::IsString() const
    {
        auto that = (Class*)this;
        return strcmp(that->GetName(), "String") == 0 && strcmp(that->GetNamespace(), "System") == 0;
    }

    bool Class::IsInt32() const
    {
        auto that = (Class*)this;
        return strcmp(that->GetName(), "Int32") == 0 && strcmp(that->GetNamespace(), "System") == 0;

    }

    std::string Class::GetFullName()
    {
        if (!isValid()) return "";

        std::string name = GetName();
        Class* declaringType = GetDeclaringType();

        if (declaringType != nullptr) {
            return declaringType->GetFullName() + "+" + name;
        }

        const char* ns = GetNamespace();
        if (ns && ns[0] != '\0') {
            return std::string(ns) + "." + name;
        }

        return name;
    }

    bool Class::IsNested()
    {
        return this->GetDeclaringType() != nullptr;
    }

    Class* Class::GetRootDeclaringType()
    {
        if (!isValid()) return nullptr;

        Class* current = this;
        Class* parent = current->GetDeclaringType();

        while (parent != nullptr) {
            current = parent;
            parent = current->GetDeclaringType();
        }


        return current;
    }

    Domain* Domain::Get()
    {
        return il2cpp_domain_get();
    }

    const Assembly* Domain::OpenAssembly(const char* name)
    {
        return il2cpp_domain_assembly_open(this, name);
    }

    std::span<const Assembly*> Domain::GetAssembliesList() const
    {
        size_t size = 0;
        const Assembly** assemblies = il2cpp_domain_get_assemblies(this, &size);

        if (!assemblies || size == 0) return {};

        return std::span<const Assembly*>(assemblies, assemblies + size);
    }

    const Image* Domain::GetCorlib()
    {
        return Image::getCorlib();
    }

    Class* Domain::LookUpClass(const char* namespaze, const char* name)
    {
        for (auto assembly : GetAssembliesList()) {
            auto image = assembly->GetImage();
            auto klass = Class::FromName(image, namespaze, name);
            if (klass) return klass;
        }
        return nullptr;
    }

    void Exception::Raise()
    {
        il2cpp_raise_exception(this);
    }

    Exception* Exception::FromNameMsg(const Image* image, const char* name_space, const char* name, const char* msg)
    {
        return il2cpp_exception_from_name_msg(image, name_space, name, msg);
    }
    Exception* Exception::ArgumentNull(const char* arg)
    {
        return il2cpp_get_exception_argument_null(arg);
    }
    std::string Exception::getMessage() const
    {
        char buffer[1024];
        il2cpp_format_exception(this, buffer, sizeof(buffer));
        return std::string(buffer);
    }
    std::string Exception::GetStackTrace() const
    {
        char buffer[4096];
        il2cpp_format_stack_trace(this, buffer, sizeof(buffer));
        return std::string(buffer);
    }
    void Exception::Unhandled()
    {
        il2cpp_unhandled_exception(this);
    }
    NativeStackTrace Exception::GetNativeStackTrace() const
    {
        NativeStackTrace result;
        ManagedPointer* addresses = nullptr;
        int numFrames = 0;
        char* uuid = nullptr;
        char* name = nullptr;

        il2cpp_native_stack_trace(this, (uintptr_t**)&addresses, &numFrames, &uuid, &name);

        if (numFrames > 0 && addresses) {
            result.frames.assign(addresses, addresses + numFrames);


            addresses->Free();
        }

        if (uuid) result.imageUUID = uuid;
        if (name) result.imageName = name;

        return result;
    }
    std::string Exception::ToString() const
    {
        return getMessage() + "\n" + GetStackTrace();
    }
    Class* Field::GetParent()
    {
        return il2cpp_field_get_parent(this);
    }
    size_t Field::GetOffset()
    {
        return il2cpp_field_get_offset(this);
    }
    const Type* Field::GetType()
    {
        return il2cpp_field_get_type(this);
    }
    int Field::GetFlags()
    {
        return il2cpp_field_get_flags(this);
    }
    bool Field::IsLiteral()
    {
        return il2cpp_field_is_literal(this);
    }
    bool Field::HasAttribute(Class* attr_class)
    {
        return il2cpp_field_has_attribute(this, attr_class);
    }

    void Field::GetValueImpl(Object* obj, void* val)
    {

        il2cpp_field_get_value(obj, this, val);
    }
    void Field::SetValueImpl(Object* obj, void* val)
    {
        il2cpp_field_set_value(obj, this, val);

    }

    Object* Field::GetValueObject(Object* obj)
    {
        return il2cpp_field_get_value_object(this, obj);
    }
    void Field::SetValueObject(Object* obj, Object* value)
    {
        il2cpp_field_set_value_object(obj, this, value);
    }
    void Field::GetStaticValueImpl(void* val)
    {
        il2cpp_field_static_get_value(this, val);

    }
    void Field::SetStaticValueImpl(void* val)
    {
        il2cpp_field_static_set_value(this, val);

    }
    ReflectionField* Field::GetReflectionObject(Class* refclass)
    {
        return il2cpp_field_get_object(this, refclass);
    }

    const Field* Field::FromReflection(ReflectionField* reflectionField)
    {
        return il2cpp_field_get_from_reflection(reflectionField);
    }

    void GC::Collect(int maxGenerations)
    {
        il2cpp_gc_collect(maxGenerations);
    }
    int32_t GC::CollectALittle()
    {
        return il2cpp_gc_collect_a_little();
    }
    void GC::StartIncrementalCollection()
    {
        il2cpp_gc_start_incremental_collection();
    }
    void GC::Disable()
    {
        il2cpp_gc_disable();
    }
    void GC::Enable()
    {
        il2cpp_gc_enable();
    }
    bool GC::IsDisabled()
    {
        return il2cpp_gc_is_disabled();
    }
    void GC::SetMode(GCMode mode)
    {
        il2cpp_gc_set_mode(mode);
    }
    int64_t GC::GetMaxTimeSliceNs()
    {
        return il2cpp_gc_get_max_time_slice_ns();
    }
    void GC::SetMaxTimeSliceNs(int64_t ns)
    {
        il2cpp_gc_set_max_time_slice_ns(ns);
    }
    bool GC::IsIncremental()
    {
        return il2cpp_gc_is_incremental();
    }
    int64_t GC::GetUsedSize()
    {
        return il2cpp_gc_get_used_size();
    }
    int64_t GC::GetHeapSize()
    {
        return il2cpp_gc_get_used_size();
    }
    void GC::WriteBarrierSetField(Object* obj, void** targetAddress, void* value)
    {
        il2cpp_gc_wbarrier_set_field(obj, targetAddress, value);
    }
    void GC::StopWorld()
    {
        il2cpp_stop_gc_world();
    }
    void GC::StartWorld()
    {
        il2cpp_start_gc_world();
    }

    GCPointerFixed* GCPointerFixed::Alloc(size_t size)
    {
        return (GCPointerFixed*)il2cpp_gc_alloc_fixed(size);

    }
    void GCPointerFixed::Free()
    {
        il2cpp_gc_free_fixed(this);
    }
    GCHandle* GCHandle::New(Object* obj, bool pinned)
    {
        return il2cpp_gchandle_new(obj, pinned);
    }
    GCHandle* GCHandle::NewWeak(Object* obj, bool track_resurrection)
    {
        return il2cpp_gchandle_new_weakref(obj, track_resurrection);
    }
    Object* GCHandle::GetTarget() const
    {
        if (!this->isValid()) return nullptr;
        return il2cpp_gchandle_get_target((GCHandle*)this);
    }
    void GCHandle::Free()
    {
        if (this->isValid()) {
            il2cpp_gchandle_free(this);
        }
    }
    uint32_t VMRuntimeInfo::GetObjectHeaderSize()
    {
        return il2cpp_object_header_size();
    }
    uint32_t VMRuntimeInfo::GetArrayHeaderSize()
    {
        return il2cpp_array_object_header_size();
    }
    uint32_t VMRuntimeInfo::GetArrayLengthOffset()
    {
        return il2cpp_offset_of_array_length_in_array_object_header();
    }
    uint32_t VMRuntimeInfo::GetArrayBoundsOffset()
    {
        return il2cpp_offset_of_array_bounds_in_array_object_header();
    }
    uint32_t VMRuntimeInfo::GetAllocationGranularity()
    {
        return il2cpp_allocation_granularity();
    }
    Liveness* Liveness::Begin(Class* filter, int maxObjectCount, LivenessRegisterCallback callback, void* userdata)
    {
        auto defaultRealloc = [](void* ptr, size_t size, void* userdata) -> void* {
            return realloc(ptr, size);
            };

        return  (Liveness*)il2cpp_unity_liveness_allocate_struct(filter, maxObjectCount, callback, userdata, defaultRealloc);
    }

    void Liveness::FromRoot(Object* root)
    {
        if (this->isValid()) il2cpp_unity_liveness_calculation_from_root(root, this);
    }

    void Liveness::FromStatics()
    {
        if (this->isValid()) il2cpp_unity_liveness_calculation_from_statics(this);
    }

    void Liveness::Finalize()
    {
        if (this->isValid()) il2cpp_unity_liveness_finalize(this);
    }

    void Liveness::Free()
    {
        if (this->isValid()) {
            il2cpp_unity_liveness_free_struct(this);
        }
    }
    const char* Method::GetName() const
    {
        return il2cpp_method_get_name(this);
    }
    Class* Method::GetDeclaringType() const
    {
        return il2cpp_method_get_declaring_type(this);
    }
    Class* Method::GetClass() const
    {
        return il2cpp_method_get_class(this);
    }
    const Type* Method::GetReturnType() const
    {
        return il2cpp_method_get_return_type(this);
    }
    uint32_t Method::GetToken() const
    {
        return il2cpp_method_get_token(this);
    }
    MethodFlags Method::GetFlags() const
    {
        MethodFlags ret{};
        ret.flags = il2cpp_method_get_flags(this, &ret.implementationFlags);
        return ret;
    }
    bool Method::IsGeneric() const
    {
        return il2cpp_method_is_generic(this);
    }
    bool Method::IsInflated() const
    { 
        return il2cpp_method_is_inflated(this);
    }
    bool Method::IsInstance() const
    {
        return il2cpp_method_is_instance(this);
    }
    uint32_t Method::GetParamCount() const
    {
        return il2cpp_method_get_param_count(this);
    }
    const Type* Method::GetParamType(uint32_t index) const
    {
        return il2cpp_method_get_param(this, index);
    }
    const char* Method::GetParamName(uint32_t index) const
    {
        return il2cpp_method_get_param_name(this, index);
    }
    bool Method::HasAttribute(Class* attr_class) const
    {
        return il2cpp_method_has_attribute(this, attr_class);
    }
    ReflectionMethod* Method::GetReflectionObject(Class* refclass) const
    {
        return il2cpp_method_get_object(this, refclass);
    }
    const Method* Method::FromReflection(const ReflectionMethod* reflectionMethod)
    {
        return il2cpp_method_get_from_reflection(reflectionMethod);
    }
    bool Method::IsStatic() const
    {
        return !IsInstance();
    }
    std::string Method::GetFullName() const
    {
        return GetDeclaringType()->GetFullName() + "::" + GetName();
    }
    void* Method::GetNativePointer() const
    {
        if (!isValid()) return nullptr;
        return *(void**)((uintptr_t)this);
    }
    std::vector<ParameterInfo> Method::GetParameters() const
    {
        std::vector<ParameterInfo> params;
        uint32_t count = GetParamCount();
        params.reserve(count);
        for (uint32_t i = 0; i < count; i++) {
            params.push_back({ GetParamName(i), GetParamType(i) });
        }
        return params;
    }
    Pointer* Method::Invoke(Pointer* obj, std::span<Pointer*> args, Exception** exc)
    {
        return Runtime::Invoke(this,obj, (void**)args.data(), exc);
    }
    const char* Property::GetName() const
    {
        return il2cpp_property_get_name((Property*)this);
    }
    Class* Property::GetParent() const
    {
        return il2cpp_property_get_parent((Property*)this);
    }
    uint32_t Property::GetFlags() const
    {
        return il2cpp_property_get_flags((Property*)this);
    }
    const Method* Property::GetGetMethod() const
    {
        return il2cpp_property_get_get_method((Property*)this);
    }
    const Method* Property::GetSetMethod() const
    {
        return il2cpp_property_get_set_method((Property*)this);
    }
    bool Property::CanRead() const
    {
        return GetGetMethod() != nullptr;
    }
    bool Property::CanWrite() const
    {
        return GetSetMethod() != nullptr;
    }
    Pointer* Property::GetValueImpl(Pointer* that)
    {
        Method* getMethod = (Method*)GetGetMethod();
        if (getMethod->isValid()) {
            return getMethod->Invoke(that, {});
           
        }
        return nullptr;
    }
    void Property::SetValueImpl(Pointer* that, Pointer* value) const
    {
        Method* getMethod = (Method*)GetGetMethod();
        if (getMethod->isValid()) {
            Pointer* args[] = {value};
            getMethod->Invoke(that, args);

        }
        auto c = (Pointer*)nullptr;
        Pointer* ref = (Pointer*)c;

        ValueToPointer(ref, c);
    }
    Class* Object::GetClass() const
    {
        return il2cpp_object_get_class(this);
    }
    uint32_t Object::GetSize() const
    {
        return il2cpp_object_get_size(this);
    }
    const Method* Object::GetVirtualMethod(const Method* method) const
    {
        return il2cpp_object_get_virtual_method(this, method);
    }

    Object* Object::New(const Class* klass)
    {
        return il2cpp_object_new(klass);
    }

    void* Object::UnboxImpl()
    {
        return il2cpp_object_unbox(this);
    }

    Object* Object::BoxImpl(Class* klass, void* value)
    {
        return il2cpp_value_box(klass,value);
    }


    void Monitor::Enter()
    {
        il2cpp_monitor_enter(this);
    }

    bool Monitor::TryEnter(uint32_t timeout_ms)
    {
        return il2cpp_monitor_try_enter(this, timeout_ms);
    }

    void Monitor::Exit()
    {
        il2cpp_monitor_exit(this);
    }

    void Monitor::Pulse()
    {
        il2cpp_monitor_pulse(this);
    }

    void Monitor::PulseAll()
    {
        il2cpp_monitor_pulse_all(this);
    }
    void Monitor::Wait()
    {
        il2cpp_monitor_wait(this);
    }
    bool Monitor::TryWait(uint32_t timeout_ms)
    {
        return il2cpp_monitor_try_wait(this, timeout_ms);
    }
    Monitor::LockGuard::LockGuard(Object* obj) : _obj((Monitor*)obj) {
        _obj->Enter();
    }
    Monitor::LockGuard::~LockGuard()
    {
        _obj->Exit();
    }
    Object* Runtime::Invoke(const Method* method, void* obj, void** params, Exception** exc)
    {
        return il2cpp_runtime_invoke(method, obj, params, exc);
    }
    Object* Runtime::InvokeConvertArgs(const Method* method, void* obj, Object** params, int paramCount, Exception** exc)
    {
        return il2cpp_runtime_invoke_convert_args(method, obj, params, paramCount, exc);
    }
    void Runtime::ClassInit(Class* klass)
    {
        il2cpp_runtime_class_init(klass);
    }
    void Runtime::ObjectInit(Object* obj)
    {
        il2cpp_runtime_object_init(obj);
    }
    void Runtime::ObjectInit(Object* obj, Exception** exc)
    {
        il2cpp_runtime_object_init_exception(obj, exc);
    }
    void Runtime::SetUnhandledExceptionPolicy(RuntimeUnhandledExceptionPolicy policy)
    {
        il2cpp_runtime_unhandled_exception_policy_set(policy);
    }
    int32_t String::Length()
    {
        return il2cpp_string_length(this);
    }
    Char* String::Chars()
    {
        return il2cpp_string_chars(this);
    }
    String* String::New(const char* str)
    {
        return il2cpp_string_new(str);
    }
    String* String::New(const char* str, uint32_t length)
    {
        return il2cpp_string_new_len(str, length);
    }
    String* String::NewUTF16(const Char* text, int32_t len)
    {
        return il2cpp_string_new_utf16(text, len);
    }
    String* String::Intern()
    {
        return il2cpp_string_intern(this);
    }

    bool String::IsInterned()
    {
        return il2cpp_string_is_interned(this) != nullptr;
    }

    std::string String::ToStdString()
    {
        if (!this->isValid()) return "";

        auto buffer = il2cpp_string_chars((String*)this);
        std::span<Char> u16(buffer, buffer + Length());

       
        return callbacks.fn_toStrFromWCharString(buffer, Length());
    }

    Thread* Thread::Current()
    {
        return il2cpp_thread_current();
    }

    Thread* Thread::Attach(Domain* domain)
    {
        return (Thread*)il2cpp_thread_attach(domain);
    }

    void Thread::Detach()
    {
        il2cpp_thread_detach(this);
    }

    bool Thread::IsVMThread()
    {
        return il2cpp_is_vm_thread(this);
    }

    ScopedThreadAttacher::ScopedThreadAttacher(Domain* domain)
    {
        _thread = Thread::Attach(domain);
    }

    ScopedThreadAttacher::~ScopedThreadAttacher()
    {
        if (_thread) _thread->Detach();
    }

    bool StackTrace::GetCurrentTopFrame(StackFrameInfo* frame)
    {
        return il2cpp_current_thread_get_top_frame(frame);
    }

    bool StackTrace::GetTopFrame(StackFrameInfo* frame)
    {
        return il2cpp_thread_get_top_frame(this, frame);
    }

    bool StackTrace::GetCurrentFrameAt(int32_t offset, StackFrameInfo* frame)
    {
        return il2cpp_current_thread_get_frame_at(offset,frame);
    }

    bool StackTrace::GetFrameAt(int32_t offset, StackFrameInfo* frame)
    {
        return il2cpp_thread_get_frame_at(this,offset,frame);
    }

    int32_t StackTrace::GetDepth()
    {
        return il2cpp_thread_get_stack_depth(this);
    }

    int32_t StackTrace::GetCurrentDepth()
    {
        return il2cpp_current_thread_get_stack_depth();
    }

    void StackTrace::OverrideBacktrace(BacktraceFunc func)
    {
        il2cpp_override_stack_backtrace(func);
    }

    


    Object* Type::getObject() const
    {
        return il2cpp_type_get_object(this);
    }

    int Type::GetTypeEnum() const
    {
        return il2cpp_type_get_type(this);
    }


    Class* Type::GetClass() const
    {
        return il2cpp_type_get_class_or_element_class(this);
    }


    std::string Type::GetName() const
    {
        char* name = il2cpp_type_get_name(this);
        
        std::string s(name);
        ((ManagedPointer*)name)->Free(); // Liberar memória alocada pelo runtime
        return s;
    }

    std::string Type::GetReflectionName() const
    {
        char* name = il2cpp_type_get_reflection_name(this);
        std::string s(name);
        ((ManagedPointer*)name)->Free(); // Liberar memória alocada pelo runtime
        return s;
    }

    std::string Type::GetAssemblyQualifiedName() const
    {
        char* name = il2cpp_type_get_assembly_qualified_name(this);
        std::string s(name);
        ((ManagedPointer*)name)->Free(); // Liberar memória alocada pelo runtime
        return s;
    }

    uint32_t Type::GetAttrs() const
    {
        return il2cpp_type_get_attrs(this);
    }

    bool Type::IsByRef() const
    {
        return il2cpp_type_is_byref(this);
    }

    bool Type::IsStatic() const {
        return il2cpp_type_is_static(this);
    }
    bool Type::IsPointer() const {
        return il2cpp_type_is_pointer_type(this);
    }

    bool Type::Equals(const Type* other) const
    {
        return il2cpp_type_equals(this, other);
    }

    const Assembly* Image::GetAssembly() {
        return il2cpp_image_get_assembly(this);
    }

    // Nome interno do módulo (ex: "Assembly-CSharp")
    const char* Image::GetName() {
        return il2cpp_image_get_name(this);
    }

    // Caminho completo ou nome do arquivo no disco
    const char* Image::GetFileName() {
        return il2cpp_image_get_filename(this);
    }

    // O método principal (Main) se houver (geralmente nulo em DLLs)
    const Method* Image::GetEntryPoint() {
        return il2cpp_image_get_entry_point(this);
    }

    // --- Navegação de Classes ---

    size_t Image::GetClassCount() {
        return il2cpp_image_get_class_count(this);
    }

    const Class* Image::GetClass(size_t index) {
        return il2cpp_image_get_class(this, index);
    }

    // Helper amigável para obter todas as classes do módulo
    std::vector<const Class*> Image::GetClasses() {
        std::vector<const Class*> classes;
        size_t count = GetClassCount();
        classes.reserve(count);
        for (size_t i = 0; i < count; i++) {
            classes.push_back(GetClass(i));
        }
        return classes;
    }
    MemoryInformation* MemoryInformation::New()
    {
        return il2cpp_capture_memory_snapshot();
    }
    void MemoryInformation::Free()
    {
        if (this->isValid()) il2cpp_free_captured_memory_snapshot(this);
    }
    void MemoryInformation::SetFindPluginCallback(FindPluginCallback callback)
    {
        il2cpp_set_find_plugin_callback(callback);
    }
    void Logging::RegisterCallback(LogCallback callback)
    {
        il2cpp_register_log_callback(callback);
    }

   
    void Debugger::SetAgentOptions(const char* options)
    {
        il2cpp_debugger_set_agent_options(options);
    }

    bool Debugger::IsAttached()
    {
        return il2cpp_is_debugger_attached();
    }

    void Debugger::RegisterTransport(DebuggerTransport* transport)
    {
        il2cpp_register_debugger_agent_transport(transport);
    }

    bool DebugMetadata::GetMethodInfo(const Method* method, MethodDebugInfo* debugInfo)
    {
        if (!method || !debugInfo) return false;
        return il2cpp_debug_get_method_info(method, debugInfo);
    }

    void TLSModule::InstallInterface(const void* unitytlsInterfaceStruct)
    {
        il2cpp_unity_install_unitytls_interface(unitytlsInterfaceStruct);
    }

    void CustomAttribute::Free()
    {
        if (this->isValid()) il2cpp_custom_attrs_free(this);
    }


    CustomAttribute* CustomAttribute::FromClass(Class* klass) {
        return il2cpp_custom_attrs_from_class(klass);
    }

    CustomAttribute* CustomAttribute::FromMethod(const Method* method) {
        return il2cpp_custom_attrs_from_method(method);
    }

    CustomAttribute* CustomAttribute::FromField(const Field* field) {
        return il2cpp_custom_attrs_from_field(field);
    }

    // --- Métodos de Instância ---

    // Verifica se possui um atributo específico
    bool CustomAttribute::Has(Class* attrKlass) {
        if (!this->isValid()) return false;
        return il2cpp_custom_attrs_has_attr(this, attrKlass);
    }

    // Obtém a instância do atributo (boxing para Object)
    Object* CustomAttribute::Get(Class* attrKlass) {
        if (!this->isValid()) return nullptr;
        return il2cpp_custom_attrs_get_attr(this, attrKlass);
    }

    // Constrói todos os atributos em um Array do Il2Cpp
    Array* CustomAttribute::ConstructAll() {
        if (!this->isValid()) return nullptr;
        return (Array*)il2cpp_custom_attrs_construct(this);
    }

    void ClassUserData::SetData(Class* klass)
    {
        il2cpp_class_set_userdata(klass, this);
    }

    int ClassUserData::GetOffset()
    {
        return il2cpp_class_get_userdata_offset();
    }

    void ThreadAffinity::SetDefault(int64_t affinity_mask)
    {
        il2cpp_set_default_thread_affinity(affinity_mask);
    }


    void AndroidNetwork::SetUpStateCallback(AndroidUpStateFunc func)
    {
        il2cpp_unity_set_android_network_up_state_func(func);
    }

    size_t ClassBitmap::GetSize()
    {
        return il2cpp_class_get_bitmap_size(this);
    }

    void ClassBitmap::GetBitmap(size_t* bitmap_out)
    {
        il2cpp_class_get_bitmap(this, bitmap_out);
    }

    std::vector<size_t> ClassBitmap::GetFullBitmap()
    {
        size_t size = GetSize();
        if (size == 0) return {};

        std::vector<size_t> bitmap(size);
        GetBitmap(bitmap.data());
        return bitmap;
    }


    void InternalCall::Add(const char* signature, void* functionPtr)
    {
        il2cpp_add_internal_call(signature, (Pointer*)functionPtr);
    }

    void* InternalCall::Resolve(const char* signature)
    {
        return (void*)il2cpp_resolve_icall(signature);
    }


    int Program::Init(char* domain_name)
    {
        return il2cpp_init(domain_name);
    }

    int Program::InitUtf16(const Char* domain_name)
    {
        return il2cpp_init_utf16(domain_name);
    }

    void Program::Shutdown()
    {
        il2cpp_shutdown();
    }

    void Paths::SetConfigDir(const char* config_path)
    {
        il2cpp_set_config_dir(config_path);
    }

    void Paths::SetDataDir(const char* data_path)
    {
        il2cpp_set_config_dir(data_path);

    }

    void Paths::SetTempDir(const char* temp_path)
    {
        il2cpp_set_config_dir(temp_path);

    }

    void CommandLine::SetArguments(int argc, const char* const argv[], const char* basedir)
    {
        il2cpp_set_commandline_arguments(argc, argv, basedir);
    }

    void CommandLine::SetArgumentsUTF16(int argc, const Char* const argv[], const char* basedir)
    {
        il2cpp_set_commandline_arguments_utf16(argc, argv, basedir);
    }

    void CommandLine::SetArguments(const std::vector<std::string>& args, const std::string& basedir)
    {
        std::vector<const char*> c_args;
        for (const auto& arg : args) {
            c_args.push_back(arg.c_str());
        }
        il2cpp_set_commandline_arguments(static_cast<int>(c_args.size()), c_args.data(), basedir.c_str());
    }
    void MemoryCallbacks::Set()
    {
        il2cpp_set_memory_callbacks(this);
    }

    void Class::GetNameChunked(const Type* type, void(*callback)(void*, void*), void* userData) {
        il2cpp_type_get_name_chunked(type, callback, userData);
    }

    Class* Class::FromType(const Type* type) {
        return il2cpp_class_from_type(type);
    }

    void Config::SetConfig(const char* executablePath)
    {
        il2cpp_set_config(executablePath);
    }

    void Config::SetConfigUtf16(const Char* executablePath)
    {
        il2cpp_set_config_utf16(executablePath);

    }
}



