#include "Quaternion.h"
#include "../UnityInterop/UnityEngine.CoreModule.dll/UnityEngine/Quaternion.h"

using namespace Il2CppWrapper::UnityInterop;
namespace  Il2CppWrapper::Unity
{
	float& Quaternion::x()
	{
		return field<float>(UnityEngine::Quaternion::f_x->GetOffset());
	}

	float& Quaternion::y()
	{
		return field<float>(UnityEngine::Quaternion::f_y->GetOffset());
	}
	float& Quaternion::z()
	{
		return field<float>(UnityEngine::Quaternion::f_z->GetOffset());
	}

	float& Quaternion::w()
	{
		return field<float>(UnityEngine::Quaternion::f_w->GetOffset());
	}

	Vector3* Quaternion::get_eulerAngles()
	{
		return UnityEngine::Quaternion::m20_get_eulerAngles->Call(this)
			->Unbox<Vector3*>();
	}

	void Quaternion::set_eulerAngles(Vector3* value)
	{
		UnityEngine::Quaternion::m21_set_eulerAngles->Call(this, value);
	}

	void Quaternion::ToAngleAxis(float& angle, Vector3* axis)
	{
		UnityEngine::Quaternion::m24_ToAngleAxis->Call(this, &angle, axis);

	}

	void Quaternion::SetFromToRotation(Vector3* from, Vector3* to)
	{
		UnityEngine::Quaternion::m25_SetFromToRotation->Call(this, from, to);
	}

	Quaternion* Quaternion::FromToRotation(Vector3* from, Vector3* to)
	{
		return UnityEngine::Quaternion::m0_FromToRotation->Call(from, to)
			->Unbox<Quaternion*>();
	}

	Quaternion* Quaternion::Inverse(Quaternion* q)
	{
		return UnityEngine::Quaternion::m1_Inverse->Call(q)
			->Unbox<Quaternion*>();
	}

	Quaternion* Quaternion::Slerp(Quaternion* a, Quaternion* b, float t)
	{
		return UnityEngine::Quaternion::m2_Slerp->Call(a, b, t)
			->Unbox<Quaternion*>();

	}

	Quaternion* Quaternion::Lerp(Quaternion* a, Quaternion* b, float t) {
		return UnityEngine::Quaternion::m3_Lerp->Call(a, b, t)
			->Unbox<Quaternion*>();
	}

	Quaternion* Quaternion::AngleAxis(float angle, Vector3* axis) {
		return UnityEngine::Quaternion::m7_AngleAxis->Call(angle, axis)
			->Unbox<Quaternion*>();
	}

	Quaternion* Quaternion::LookRotation(Vector3* forward, Vector3* up) {
		return UnityEngine::Quaternion::m8_LookRotation->Call(forward, up)
			->Unbox<Quaternion*>();

;
	}

	Quaternion* Quaternion::LookRotation(Vector3* forward) {
		return UnityEngine::Quaternion::m9_LookRotation->Call(forward)
			->Unbox<Quaternion*>();
	}

	Quaternion* Quaternion::identity() {
		return UnityEngine::Quaternion::m11_get_identity->Call()
			->Unbox<Quaternion*>()
;
	}

	Quaternion* Quaternion::Euler(float x, float y, float z) {
		return UnityEngine::Quaternion::m22_Euler->Call(x, y, z)
			->Unbox<Quaternion*>();
	}

	Quaternion* Quaternion::Euler(Vector3* euler) {
		return UnityEngine::Quaternion::m23_Euler->Call(euler)
			->Unbox<Quaternion*>();
	}

	float Quaternion::Dot(Quaternion* a, Quaternion* b) {
		return UnityEngine::Quaternion::m17_Dot->Call(a, b)
			->Unbox<float>();
	}

	float Quaternion::Angle(Quaternion* a, Quaternion* b) {
		return UnityEngine::Quaternion::m18_Angle->Call(a, b)
			->Unbox<float>();
	}

	


	
}
