#include "include/card/mat1.h"

void MAT1::display()
{
    std::cout << "   material_" << _MID << std::endl;
    std::cout << "{" << std::endl;
    std::cout << "MID: " << _MID << std::endl;
    std::cout << "E: " << _E << std::endl;
    std::cout << "G: " << _G << std::endl;
    std::cout << "NU: " << _NU << std::endl;
    std::cout << "ROU: " << _ROU << std::endl;
    std::cout << "A: " << _A << std::endl;
    std::cout << "TREF: " << _TREF << std::endl;
    std::cout << "GE: " << _GE << std::endl;
    std::cout << "}" << std::endl;
}