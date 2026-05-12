
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Type {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 148> methods;
    inline static std::array<Il2CppWrapper::Field*, 8> fields;  
    /* System.Reflection.Binder System::Type::s_defaultBinder */
inline static auto& f_s_defaultBinder = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.Char System::Type::Delimiter */
inline static auto& f_Delimiter = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.Type[] System::Type::EmptyTypes */
inline static auto& f_EmptyTypes = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* System.Object System::Type::Missing */
inline static auto& f_Missing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* System.Reflection.MemberFilter System::Type::FilterAttribute */
inline static auto& f_FilterAttribute = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
/* System.Reflection.MemberFilter System::Type::FilterName */
inline static auto& f_FilterName = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[5]);
/* System.Reflection.MemberFilter System::Type::FilterNameIgnoreCase */
inline static auto& f_FilterNameIgnoreCase = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[6]);
/* System.RuntimeTypeHandle System::Type::_impl */
inline static auto& f__impl = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
  
    /* System.Boolean System::Type::IsEnumDefined(System.Object) */
inline static auto& m0_IsEnumDefined = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);
/* System.String System::Type::GetEnumName(System.Object) */
inline static auto& m1_GetEnumName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.String[] System::Type::GetEnumNames() */
inline static auto& m2_GetEnumNames = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Array System::Type::GetEnumRawConstantValues() */
inline static auto& m3_GetEnumRawConstantValues = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void System::Type::GetEnumData(System.String[]&, System.Array&) */
inline static auto& m4_GetEnumData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Int32 System::Type::BinarySearch(System.Array, System.Object) */
inline static auto& m5_BinarySearch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Boolean System::Type::IsIntegerType(System.Type) */
inline static auto& m6_IsIntegerType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Boolean System::Type::get_IsSerializable() */
inline static auto& m7_get_IsSerializable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Boolean System::Type::get_ContainsGenericParameters() */
inline static auto& m8_get_ContainsGenericParameters = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Type System::Type::GetRootElementType() */
inline static auto& m9_GetRootElementType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Boolean System::Type::get_IsVisible() */
inline static auto& m10_get_IsVisible = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Boolean System::Type::IsSubclassOf(System.Type) */
inline static auto& m11_IsSubclassOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Boolean System::Type::IsAssignableFrom(System.Type) */
inline static auto& m12_IsAssignableFrom = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Boolean System::Type::ImplementInterface(System.Type) */
inline static auto& m13_ImplementInterface = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Boolean System::Type::FilterAttributeImpl(System.Reflection.MemberInfo, System.Object) */
inline static auto& m14_FilterAttributeImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Boolean System::Type::FilterNameImpl(System.Reflection.MemberInfo, System.Object) */
inline static auto& m15_FilterNameImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Boolean System::Type::FilterNameIgnoreCaseImpl(System.Reflection.MemberInfo, System.Object) */
inline static auto& m16_FilterNameIgnoreCaseImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.Void System::Type::.ctor() */
inline static auto& m17__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Reflection.MemberTypes System::Type::get_MemberType() */
inline static auto& m18_get_MemberType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.Type System::Type::GetType() */
inline static auto& m19_GetType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.String System::Type::get_Namespace() */
inline static auto& m20_get_Namespace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.String System::Type::get_AssemblyQualifiedName() */
inline static auto& m21_get_AssemblyQualifiedName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[21]);
/* System.String System::Type::get_FullName() */
inline static auto& m22_get_FullName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.Reflection.Assembly System::Type::get_Assembly() */
inline static auto& m23_get_Assembly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.Reflection.Module System::Type::get_Module() */
inline static auto& m24_get_Module = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[24]);
/* System.Boolean System::Type::get_IsNested() */
inline static auto& m25_get_IsNested = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Type System::Type::get_DeclaringType() */
inline static auto& m26_get_DeclaringType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[26]);
/* System.Reflection.MethodBase System::Type::get_DeclaringMethod() */
inline static auto& m27_get_DeclaringMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Type System::Type::get_ReflectedType() */
inline static auto& m28_get_ReflectedType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.Type System::Type::get_UnderlyingSystemType() */
inline static auto& m29_get_UnderlyingSystemType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[29]);
/* System.Boolean System::Type::get_IsArray() */
inline static auto& m30_get_IsArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[30]);
/* System.Boolean System::Type::IsArrayImpl() */
inline static auto& m31_IsArrayImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[31]);
/* System.Boolean System::Type::get_IsByRef() */
inline static auto& m32_get_IsByRef = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[32]);
/* System.Boolean System::Type::IsByRefImpl() */
inline static auto& m33_IsByRefImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[33]);
/* System.Boolean System::Type::get_IsPointer() */
inline static auto& m34_get_IsPointer = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[34]);
/* System.Boolean System::Type::IsPointerImpl() */
inline static auto& m35_IsPointerImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[35]);
/* System.Boolean System::Type::get_IsConstructedGenericType() */
inline static auto& m36_get_IsConstructedGenericType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[36]);
/* System.Boolean System::Type::get_IsGenericParameter() */
inline static auto& m37_get_IsGenericParameter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[37]);
/* System.Boolean System::Type::get_IsGenericMethodParameter() */
inline static auto& m38_get_IsGenericMethodParameter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[38]);
/* System.Boolean System::Type::get_IsGenericType() */
inline static auto& m39_get_IsGenericType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[39]);
/* System.Boolean System::Type::get_IsGenericTypeDefinition() */
inline static auto& m40_get_IsGenericTypeDefinition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[40]);
/* System.Boolean System::Type::get_IsSZArray() */
inline static auto& m41_get_IsSZArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[41]);
/* System.Boolean System::Type::get_IsVariableBoundArray() */
inline static auto& m42_get_IsVariableBoundArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[42]);
/* System.Boolean System::Type::get_HasElementType() */
inline static auto& m43_get_HasElementType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[43]);
/* System.Boolean System::Type::HasElementTypeImpl() */
inline static auto& m44_HasElementTypeImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[44]);
/* System.Type System::Type::GetElementType() */
inline static auto& m45_GetElementType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[45]);
/* System.Int32 System::Type::GetArrayRank() */
inline static auto& m46_GetArrayRank = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[46]);
/* System.Type System::Type::GetGenericTypeDefinition() */
inline static auto& m47_GetGenericTypeDefinition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[47]);
/* System.Type[] System::Type::get_GenericTypeArguments() */
inline static auto& m48_get_GenericTypeArguments = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[48]);
/* System.Type[] System::Type::GetGenericArguments() */
inline static auto& m49_GetGenericArguments = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[49]);
/* System.Int32 System::Type::get_GenericParameterPosition() */
inline static auto& m50_get_GenericParameterPosition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[50]);
/* System.Reflection.GenericParameterAttributes System::Type::get_GenericParameterAttributes() */
inline static auto& m51_get_GenericParameterAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[51]);
/* System.Type[] System::Type::GetGenericParameterConstraints() */
inline static auto& m52_GetGenericParameterConstraints = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[52]);
/* System.Reflection.TypeAttributes System::Type::get_Attributes() */
inline static auto& m53_get_Attributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[53]);
/* System.Reflection.TypeAttributes System::Type::GetAttributeFlagsImpl() */
inline static auto& m54_GetAttributeFlagsImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[54]);
/* System.Boolean System::Type::get_IsAbstract() */
inline static auto& m55_get_IsAbstract = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[55]);
/* System.Boolean System::Type::get_IsSealed() */
inline static auto& m56_get_IsSealed = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[56]);
/* System.Boolean System::Type::get_IsClass() */
inline static auto& m57_get_IsClass = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[57]);
/* System.Boolean System::Type::get_IsNestedAssembly() */
inline static auto& m58_get_IsNestedAssembly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[58]);
/* System.Boolean System::Type::get_IsNestedPublic() */
inline static auto& m59_get_IsNestedPublic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[59]);
/* System.Boolean System::Type::get_IsNotPublic() */
inline static auto& m60_get_IsNotPublic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[60]);
/* System.Boolean System::Type::get_IsPublic() */
inline static auto& m61_get_IsPublic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[61]);
/* System.Boolean System::Type::get_IsExplicitLayout() */
inline static auto& m62_get_IsExplicitLayout = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[62]);
/* System.Boolean System::Type::get_IsCOMObject() */
inline static auto& m63_get_IsCOMObject = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[63]);
/* System.Boolean System::Type::IsCOMObjectImpl() */
inline static auto& m64_IsCOMObjectImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[64]);
/* System.Boolean System::Type::get_IsContextful() */
inline static auto& m65_get_IsContextful = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[65]);
/* System.Boolean System::Type::IsContextfulImpl() */
inline static auto& m66_IsContextfulImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[66]);
/* System.Boolean System::Type::get_IsCollectible() */
inline static auto& m67_get_IsCollectible = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[67]);
/* System.Boolean System::Type::get_IsEnum() */
inline static auto& m68_get_IsEnum = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[68]);
/* System.Boolean System::Type::get_IsMarshalByRef() */
inline static auto& m69_get_IsMarshalByRef = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[69]);
/* System.Boolean System::Type::IsMarshalByRefImpl() */
inline static auto& m70_IsMarshalByRefImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[70]);
/* System.Boolean System::Type::get_IsPrimitive() */
inline static auto& m71_get_IsPrimitive = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[71]);
/* System.Boolean System::Type::IsPrimitiveImpl() */
inline static auto& m72_IsPrimitiveImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[72]);
/* System.Boolean System::Type::get_IsValueType() */
inline static auto& m73_get_IsValueType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[73]);
/* System.Boolean System::Type::IsValueTypeImpl() */
inline static auto& m74_IsValueTypeImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[74]);
/* System.Boolean System::Type::get_IsSignatureType() */
inline static auto& m75_get_IsSignatureType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[75]);
/* System.Reflection.ConstructorInfo System::Type::GetConstructor(System.Type[]) */
inline static auto& m76_GetConstructor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[76]);
/* System.Reflection.ConstructorInfo System::Type::GetConstructor(System.Reflection.BindingFlags, System.Reflection.Binder, System.Type[], System.Reflection.ParameterModifier[]) */
inline static auto& m77_GetConstructor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[77]);
/* System.Reflection.ConstructorInfo System::Type::GetConstructor(System.Reflection.BindingFlags, System.Reflection.Binder, System.Reflection.CallingConventions, System.Type[], System.Reflection.ParameterModifier[]) */
inline static auto& m78_GetConstructor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[78]);
/* System.Reflection.ConstructorInfo System::Type::GetConstructorImpl(System.Reflection.BindingFlags, System.Reflection.Binder, System.Reflection.CallingConventions, System.Type[], System.Reflection.ParameterModifier[]) */
inline static auto& m79_GetConstructorImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[79]);
/* System.Reflection.ConstructorInfo[] System::Type::GetConstructors() */
inline static auto& m80_GetConstructors = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[80]);
/* System.Reflection.ConstructorInfo[] System::Type::GetConstructors(System.Reflection.BindingFlags) */
inline static auto& m81_GetConstructors = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[81]);
/* System.Reflection.EventInfo System::Type::GetEvent(System.String, System.Reflection.BindingFlags) */
inline static auto& m82_GetEvent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[82]);
/* System.Reflection.FieldInfo System::Type::GetField(System.String) */
inline static auto& m83_GetField = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[83]);
/* System.Reflection.FieldInfo System::Type::GetField(System.String, System.Reflection.BindingFlags) */
inline static auto& m84_GetField = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[84]);
/* System.Reflection.FieldInfo[] System::Type::GetFields(System.Reflection.BindingFlags) */
inline static auto& m85_GetFields = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[85]);
/* System.Reflection.MemberInfo[] System::Type::GetMember(System.String) */
inline static auto& m86_GetMember = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[86]);
/* System.Reflection.MemberInfo[] System::Type::GetMember(System.String, System.Reflection.BindingFlags) */
inline static auto& m87_GetMember = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[87]);
/* System.Reflection.MemberInfo[] System::Type::GetMember(System.String, System.Reflection.MemberTypes, System.Reflection.BindingFlags) */
inline static auto& m88_GetMember = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[88]);
/* System.Reflection.MemberInfo[] System::Type::GetMembers(System.Reflection.BindingFlags) */
inline static auto& m89_GetMembers = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[89]);
/* System.Reflection.MethodInfo System::Type::GetMethod(System.String) */
inline static auto& m90_GetMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[90]);
/* System.Reflection.MethodInfo System::Type::GetMethod(System.String, System.Reflection.BindingFlags) */
inline static auto& m91_GetMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[91]);
/* System.Reflection.MethodInfo System::Type::GetMethod(System.String, System.Type[]) */
inline static auto& m92_GetMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[92]);
/* System.Reflection.MethodInfo System::Type::GetMethod(System.String, System.Type[], System.Reflection.ParameterModifier[]) */
inline static auto& m93_GetMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[93]);
/* System.Reflection.MethodInfo System::Type::GetMethod(System.String, System.Reflection.BindingFlags, System.Reflection.Binder, System.Type[], System.Reflection.ParameterModifier[]) */
inline static auto& m94_GetMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[94]);
/* System.Reflection.MethodInfo System::Type::GetMethod(System.String, System.Reflection.BindingFlags, System.Reflection.Binder, System.Reflection.CallingConventions, System.Type[], System.Reflection.ParameterModifier[]) */
inline static auto& m95_GetMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[95]);
/* System.Reflection.MethodInfo System::Type::GetMethodImpl(System.String, System.Reflection.BindingFlags, System.Reflection.Binder, System.Reflection.CallingConventions, System.Type[], System.Reflection.ParameterModifier[]) */
inline static auto& m96_GetMethodImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[96]);
/* System.Reflection.MethodInfo[] System::Type::GetMethods() */
inline static auto& m97_GetMethods = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[97]);
/* System.Reflection.MethodInfo[] System::Type::GetMethods(System.Reflection.BindingFlags) */
inline static auto& m98_GetMethods = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[98]);
/* System.Type System::Type::GetNestedType(System.String, System.Reflection.BindingFlags) */
inline static auto& m99_GetNestedType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[99]);
/* System.Reflection.PropertyInfo System::Type::GetProperty(System.String) */
inline static auto& m100_GetProperty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[100]);
/* System.Reflection.PropertyInfo System::Type::GetProperty(System.String, System.Reflection.BindingFlags) */
inline static auto& m101_GetProperty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[101]);
/* System.Reflection.PropertyInfo System::Type::GetProperty(System.String, System.Type) */
inline static auto& m102_GetProperty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[102]);
/* System.Reflection.PropertyInfo System::Type::GetProperty(System.String, System.Type, System.Type[]) */
inline static auto& m103_GetProperty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[103]);
/* System.Reflection.PropertyInfo System::Type::GetProperty(System.String, System.Type, System.Type[], System.Reflection.ParameterModifier[]) */
inline static auto& m104_GetProperty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[104]);
/* System.Reflection.PropertyInfo System::Type::GetProperty(System.String, System.Reflection.BindingFlags, System.Reflection.Binder, System.Type, System.Type[], System.Reflection.ParameterModifier[]) */
inline static auto& m105_GetProperty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[105]);
/* System.Reflection.PropertyInfo System::Type::GetPropertyImpl(System.String, System.Reflection.BindingFlags, System.Reflection.Binder, System.Type, System.Type[], System.Reflection.ParameterModifier[]) */
inline static auto& m106_GetPropertyImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[106]);
/* System.Reflection.PropertyInfo[] System::Type::GetProperties(System.Reflection.BindingFlags) */
inline static auto& m107_GetProperties = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[107]);
/* System.RuntimeTypeHandle System::Type::get_TypeHandle() */
inline static auto& m108_get_TypeHandle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[108]);
/* System.RuntimeTypeHandle System::Type::GetTypeHandle(System.Object) */
inline static auto& m109_GetTypeHandle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[109]);
/* System.TypeCode System::Type::GetTypeCode(System.Type) */
inline static auto& m110_GetTypeCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[110]);
/* System.TypeCode System::Type::GetTypeCodeImpl() */
inline static auto& m111_GetTypeCodeImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[111]);
/* System.Type System::Type::get_BaseType() */
inline static auto& m112_get_BaseType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[112]);
/* System.Object System::Type::InvokeMember(System.String, System.Reflection.BindingFlags, System.Reflection.Binder, System.Object, System.Object[], System.Reflection.ParameterModifier[], System.Globalization.CultureInfo, System.String[]) */
inline static auto& m113_InvokeMember = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[113]);
/* System.Type[] System::Type::GetInterfaces() */
inline static auto& m114_GetInterfaces = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[114]);
/* System.Boolean System::Type::IsInstanceOfType(System.Object) */
inline static auto& m115_IsInstanceOfType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[115]);
/* System.Boolean System::Type::IsEquivalentTo(System.Type) */
inline static auto& m116_IsEquivalentTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[116]);
/* System.Type System::Type::GetEnumUnderlyingType() */
inline static auto& m117_GetEnumUnderlyingType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[117]);
/* System.Array System::Type::GetEnumValues() */
inline static auto& m118_GetEnumValues = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[118]);
/* System.Type System::Type::MakeArrayType() */
inline static auto& m119_MakeArrayType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[119]);
/* System.Type System::Type::MakeArrayType(System.Int32) */
inline static auto& m120_MakeArrayType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[120]);
/* System.Type System::Type::MakeByRefType() */
inline static auto& m121_MakeByRefType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[121]);
/* System.Type System::Type::MakeGenericType(System.Type[]) */
inline static auto& m122_MakeGenericType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[122]);
/* System.Type System::Type::MakePointerType() */
inline static auto& m123_MakePointerType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[123]);
/* System.Type System::Type::MakeGenericSignatureType(System.Type, System.Type[]) */
inline static auto& m124_MakeGenericSignatureType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[124]);
/* System.String System::Type::ToString() */
inline static auto& m125_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[125]);
/* System.Boolean System::Type::Equals(System.Object) */
inline static auto& m126_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[126]);
/* System.Int32 System::Type::GetHashCode() */
inline static auto& m127_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[127]);
/* System.Boolean System::Type::Equals(System.Type) */
inline static auto& m128_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[128]);
/* System.Reflection.Binder System::Type::get_DefaultBinder() */
inline static auto& m129_get_DefaultBinder = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[129]);
/* System.Type System::Type::GetTypeFromHandle(System.RuntimeTypeHandle) */
inline static auto& m130_GetTypeFromHandle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[130]);
/* System.Type System::Type::internal_from_handle(System.IntPtr) */
inline static auto& m131_internal_from_handle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[131]);
/* System.Boolean System::Type::get_IsSzArray() */
inline static auto& m132_get_IsSzArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[132]);
/* System.String System::Type::FormatTypeName() */
inline static auto& m133_FormatTypeName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[133]);
/* System.String System::Type::FormatTypeName(System.Boolean) */
inline static auto& m134_FormatTypeName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[134]);
/* System.Boolean System::Type::get_IsInterface() */
inline static auto& m135_get_IsInterface = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[135]);
/* System.Type System::Type::GetType(System.String, System.Boolean, System.Boolean) */
inline static auto& m136_GetType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[136]);
/* System.Type System::Type::GetType(System.String, System.Boolean) */
inline static auto& m137_GetType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[137]);
/* System.Type System::Type::GetType(System.String) */
inline static auto& m138_GetType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[138]);
/* System.Type System::Type::GetType(System.String, System.Func<System.Reflection.AssemblyName,System.Reflection.Assembly>, System.Func<System.Reflection.Assembly,System.String,System.Boolean,System.Type>, System.Boolean) */
inline static auto& m139_GetType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[139]);
/* System.Boolean System::Type::op_Equality(System.Type, System.Type) */
inline static auto& m140_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[140]);
/* System.Boolean System::Type::op_Inequality(System.Type, System.Type) */
inline static auto& m141_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[141]);
/* System.String System::Type::get_FullNameOrDefault() */
inline static auto& m142_get_FullNameOrDefault = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[142]);
/* System.Boolean System::Type::IsRuntimeImplemented() */
inline static auto& m143_IsRuntimeImplemented = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[143]);
/* System.String System::Type::InternalGetNameIfAvailable(System.Type&) */
inline static auto& m144_InternalGetNameIfAvailable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[144]);
/* System.String System::Type::get_InternalNameIfAvailable() */
inline static auto& m145_get_InternalNameIfAvailable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[145]);
/* System.String System::Type::get_NameOrDefault() */
inline static auto& m146_get_NameOrDefault = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[146]);
/* System.Void System::Type::.cctor() */
inline static auto& m147__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[147]);

};

}