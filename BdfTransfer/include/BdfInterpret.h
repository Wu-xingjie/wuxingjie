#pragma once

#include <string>
#include <vector>

#include "GRID.h"

class BdfInterpret
{
    public:
        BdfInterpret(const std::string &BdfAddress);  //read bdf file
        void BdfProcessor(); //deal with _bdf
    private:
        std::vector<std::string> _bdf;
};