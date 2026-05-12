#pragma once
#include "../Il2CppWrapper.h"

namespace Il2CppWrapper::Unity {

    /**
     * @brief Wrapper de alto nível para a struct Vector2 do UnityEngine.
     * Herda de Il2CppWrapper::Struct para permitir manipulação de memória e chamadas ao runtime.
     */
    struct Vector2 : public Il2CppWrapper::Struct {

        // --- Instance Fields ---

        float& x();

        float& y();

        // --- Instance Methods ---

        void Set(float x, float y);

        void Normalize();

        Vector2* get_normalized();

        // --- Static Methods ---

        static Vector2* Lerp(
            Vector2* a,
            Vector2* b,
            float t
        );

        static float Dot(
            Vector2* a,
            Vector2* b
        );

        static float Distance(
            Vector2* a,
            Vector2* b
        );

        static Vector2* Min(
            Vector2* a,
            Vector2* b
        );

        static Vector2* Max(
            Vector2* a,
            Vector2* b
        );

        // --- Static Fields ---

        static Vector2* zero();

        static Vector2* one();

        static Vector2* up();

        static Vector2* down();

        static Vector2* left();

        static Vector2* right();
    };

}