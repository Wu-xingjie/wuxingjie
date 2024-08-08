#pragma once

#include <vector>
#include <string>
#include <iostream>

class Material
{
    public:
        Material() = default;
        ~Material() = default;
        virtual void MaterialDisplay() = 0;
};