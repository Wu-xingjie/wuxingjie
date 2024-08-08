#pragma once

#include "include/material.h"

class MAT1 : public Material
{
    public:
        MAT1() = default;
        ~MAT1() = default;
        void MaterialDisplay() override;

        std::string _MID;
        std::string _E;
        std::string _G;
        std::string _NU;
        std::string _ROU;
        std::string _A;
        std::string _TREF;
        std::string _GE;
};