#include "include/mat1.h"

void MAT1::MaterialDisplay()
{
    std::cout << "   material_" << _MID << std::endl;
    std::cout << "   {" << std::endl;
    std::cout << "      young's modulus = " << _E << std::endl;
    std::cout << "      shear's modulus = " << _G << std::endl;
    std::cout << "      poisson's modulus = " << _NU << std::endl;
    std::cout << "      density = " << _ROU << std::endl;
    std::cout << "      thermal expansion coefficient = " << _A << std::endl;
    std::cout << "      reference temperature for thermal load = " << _TREF << std::endl;
    std::cout << "      structural damping = " << _GE << std::endl;
    std::cout << "   }" << std::endl;
}