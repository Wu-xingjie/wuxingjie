#pragma once

#include "Entry.h"
#include <string>

class GRID : public Entry
{
    public:
        GRID();
    private:
        static std::string _name;
        int _GID;
        int _CP;
        double _X1;
        double _X2;
        double _X3;
        int _CD;
        int _PS;
        int _SEID;       
};