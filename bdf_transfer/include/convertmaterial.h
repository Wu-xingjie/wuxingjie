#pragma once 

#include <string>

struct MAT1
{
    int MID;
    long double E;
    long double G;
    double NU;
    double ROU;
    double A;
    double TREF;
    long double GE;
};

struct PROD
{
    int PID;
    int MID;
    double A;
    long double J;
    long double C;
    double NSM;
};

struct ROD
{
    int EID;
    int GA;
    int GB;
    std::string CMA;
    std::string CMB;
    long double ALPHA;
};

class RodTranslator
{
    public:
        RodTranslator(std::string bdfaddress);
        void BDFtoJSON();
        void Show();
        ~RodTranslator();
    private:
        MAT1 *_mat1;
        PROD *_prod;
        ROD *_rod;
};