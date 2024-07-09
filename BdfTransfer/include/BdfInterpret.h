#pragma once

#include <string>
#include <vector>

class BdfInterpret
{
    public:
        BdfInterpret(const std::string &BdfAddress);  //read bdf file
        void BdfProcessor(); //deal with _bdfa
    private:
        std::vector<std::string> _bdf;
};