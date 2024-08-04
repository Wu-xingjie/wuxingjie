#pragma once

#include <vector>
#include <string>
#include "include/card/mat1.h"

class DateModel
{
    public:
        DateModel() = default;
        ~DateModel() = default;
        void Show();

    private:
        std::vector<MAT1> _Material_dbs;
};