#pragma once

#include "include/card/material.h"

class MAT1 : public Material
{
    public:
        MAT1() = default;
        ~MAT1() = default;
        void display() override;

        std::string _MID;
        std::string _E;
        std::string _G;
        std::string _NU;
        std::string _ROU;
        std::string _A;
        std::string _TREF;
        std::string _GE;
};