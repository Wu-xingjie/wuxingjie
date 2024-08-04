#pragma once

#include "include/card/material.h"

class MAT1 : public Material
{
    public:
        MAT1(std::vector<std::vector<std::string>> entry)
        : _mat1_entry(entry){};
        ~MAT1() = default;
        void display() override;

        int _MID;
        double _E;
        double _G;
        double _NU;
        double _ROU;
        double _A;
        double _TREF;
        double _GE;

        std::vector<std::vector<std::string>> _mat1_entry;
};