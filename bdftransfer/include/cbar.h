#pragma once

#include "include/element.h"

class CBAR : public Element
{
    public:
        CBAR() = default;
        ~CBAR() = default;
        void ElementDisplay() override;

        std::string _EID;
        std::string _PID;
        std::string _GA;
        std::string _GB;
        std::string _X1;
        std::string _X2;
        std::string _X3;
        std::string _OFFT;
        std::string _PA;
        std::string _PB;
        std::string _W1A;
        std::string _W2A;
        std::string _W3A;
        std::string _W1B;
        std::string _W2B;
        std::string _W3B;      
};