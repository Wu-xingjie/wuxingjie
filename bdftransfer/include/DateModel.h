#pragma once

#include <vector>
#include <string>
#include "include/mat1.h"

class DateModel
{
    public:
        DateModel(const std::vector<std::vector<std::string>>& src_file)
        : _src_file(src_file){};
        ~DateModel() = default;

        void MAT1Catch();


        void Transfer();

        std::vector<MAT1> _Material_dbs;
        std::vector<std::vector<std::string>> _src_file;
};