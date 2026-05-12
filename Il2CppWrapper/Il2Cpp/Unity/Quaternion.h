#pragma once
#include "../Il2CppWrapper.h"
#include "Vector3.h"
namespace Il2CppWrapper::Unity {

    /**
     * @brief Wrapper de alto nível para a struct Quaternion do UnityEngine.
     * Herda de Il2CppWrapper::Struct para manipulação de memória e chamadas ao runtime.
     */
    struct Quaternion : Il2CppWrapper::Struct {

        // --- Propriedades de Instância (Fields) ---

        float& x();

        float& y();

        float& z();

        float& w();

        // --- Métodos de Instância ---

        Vector3* get_eulerAngles();

        void set_eulerAngles(Vector3* value);

        void ToAngleAxis(float& angle, Vector3* axis);

        void SetFromToRotation(Vector3* from, Vector3* to);

        // --- Métodos Estáticos ---

        Quaternion* FromToRotation(Vector3* from, Vector3* to);

        Quaternion* Inverse(Quaternion* q);

        Quaternion* Slerp(Quaternion* a, Quaternion* b, float t);

        static Quaternion* Lerp(Quaternion* a, Quaternion* b, float t);

        static Quaternion* AngleAxis(float angle, Vector3* axis);

        static Quaternion* LookRotation(Vector3* forward, Vector3* up);

        static Quaternion* LookRotation(Vector3* forward);

        static Quaternion* identity();

        static Quaternion* Euler(float x, float y, float z);

        static Quaternion* Euler(Vector3* euler);

        static float Dot(Quaternion* a, Quaternion* b);

        static float Angle(Quaternion* a, Quaternion* b);
        

    };

}