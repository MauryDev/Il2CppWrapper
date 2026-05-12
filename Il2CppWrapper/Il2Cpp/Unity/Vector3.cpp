#include "Vector3.h"
#include "../Il2CppWrapper.h"
#include"../UnityInterop/UnityEngine.CoreModule.dll/UnityEngine/Vector3.h"
using namespace Il2CppWrapper::UnityInterop;
namespace Il2CppWrapper::Unity
{
	float& Vector3::x()
	{
		return field<float>(UnityEngine::Vector3::f_x->GetOffset());
	}
	float& Vector3::y()
	{
		return field<float>(UnityEngine::Vector3::f_y->GetOffset());
	}
	float& Vector3::z()
	{
		return field<float>(UnityEngine::Vector3::f_z->GetOffset());
	}

	Vector3* Vector3::Zero()
	{
		return UnityEngine::Vector3::m27_get_zero->Call()
			->Unbox<Vector3*>();
	}

	Vector3* Vector3::One()
	{
		return UnityEngine::Vector3::m28_get_one->Call()
			->Unbox<Vector3*>();
	}

	Vector3* Vector3::Back()
	{
		return UnityEngine::Vector3::m30_get_back->Call()
			->Unbox<Vector3*>();
	}

	Vector3* Vector3::Up()
	{
		return UnityEngine::Vector3::m31_get_up->Call()
			->Unbox<Vector3*>();
	}

	Vector3* Vector3::Down()
	{
		return UnityEngine::Vector3::m32_get_down->Call()
			->Unbox<Vector3*>();
	}

	Vector3* Vector3::Left()
	{
		return UnityEngine::Vector3::m33_get_left->Call()
			->Unbox<Vector3*>();
	}

	Vector3* Vector3::Right()
	{
		return UnityEngine::Vector3::m34_get_right->Call()
			->Unbox<Vector3*>();
	}

	float Vector3::Dot(Vector3* a, Vector3* b)
	{
		return UnityEngine::Vector3::m16_Dot->Call(a,b)
			->Unbox<float>();
	}

	Vector3* Vector3::Cross(Vector3* a, Vector3* b)
	{
		return UnityEngine::Vector3::m9_Cross->Call(a,b)
			->Unbox<Vector3*>();
	}

	float Vector3::Magnitude(Vector3* v)
	{
		return UnityEngine::Vector3::m9_Cross->Call(v)
			->Unbox<float>();
	}

	float Vector3::SqrMagnitude(Vector3* v)
	{
		return UnityEngine::Vector3::m23_SqrMagnitude->Call(v)
			->Unbox<float>();
	}

	Vector3* Vector3::Lerp(Vector3* a, Vector3* b, float t) {
		return UnityEngine::Vector3::m1_Lerp->Call(a, b, t)
			->Unbox<Vector3*>();
	}

	Vector3* Vector3::Slerp(Vector3* a, Vector3* b, float t) {
		return UnityEngine::Vector3::m0_Slerp->Call(a, b, t)
			->Unbox<Vector3*>();
		;
	}

	float Vector3::Distance(Vector3* a, Vector3* b) {
		return UnityEngine::Vector3::m19_Distance->Call(a, b)
			->Unbox<float>();

	}

	

	
	Vector3* Vector3::Normalize(Vector3* v) {
		return UnityEngine::Vector3::m13_Normalize->Call(v)
			->Unbox<Vector3*>();
	}

	Vector3* Vector3::ClampMagnitude(Vector3* v, float max) {
		return UnityEngine::Vector3::m20_ClampMagnitude->Call(v, max)
			->Unbox<Vector3*>();
	}

	 Vector3* Vector3::Add(Vector3* a, Vector3*b) {
		return UnityEngine::Vector3::m36_op_Addition->Call(a, b)
			->Unbox<Vector3*>();

	}

	 Vector3* Vector3::Subtract(Vector3* a, Vector3* b) {
		return UnityEngine::Vector3::m37_op_Subtraction->Call(a, b)
			->Unbox<Vector3*>();

	}

	 Vector3* Vector3::Multiply(Vector3* v, float scalar) {
		return UnityEngine::Vector3::m39_op_Multiply->Call(v, scalar)
			->Unbox<Vector3*>();

	}

	 Vector3* Vector3::Divide(Vector3* v, float scalar) {
		return UnityEngine::Vector3::m41_op_Division->Call(v, scalar)
			->Unbox<Vector3*>();

	}

}
