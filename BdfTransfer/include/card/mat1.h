#pragma once 
#include "include/card/BDFentry.h"

class Mat1 : private Bdfentry
{
    public:
        Mat1(const Entry& entry);
        void Tomodel() override;
    private:
        std::string _MID;
        std::string _E;
        std::string _G;
        std::string _NU;
        std::string _RHO;
        std::string _A;
        std::string _TREF;
        std::string _GE;
        std::string _ST;
        std::string _SC;
        std::string _SS;
        std::string _MCSID;
};