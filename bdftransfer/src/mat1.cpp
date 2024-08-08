#include "include/mat1.h"

void MAT1::MaterialDisplay()
{
    std::cout << "   material_" << _MID << std::endl;
    std::cout << "   {" << std::endl;
    if (_E != "NULL")
    {
        std::cout << "      young's modulus = " << _E << std::endl;
    }
    if (_G != "NULL")
    {
        std::cout << "      shear's modulus = " << _G << std::endl;
    }
    if (_NU != "NULL")
    {
        std::cout << "      poisson's modulus = " << _NU << std::endl;
    }
    if (_ROU != "NULL")
    {
        std::cout << "      density = " << _ROU << std::endl;
    }
    if (_A != "NULL")
    {
        std::cout << "      thermal expansion coefficient = " << _A << std::endl;
    }
    if (_TREF != "NULL")
    {
        std::cout << "      reference temperature for thermal load = " << _TREF << std::endl;
    }
    if (_GE != "NULL")
    {
        std::cout << "      structural damping = " << _GE << std::endl;
    }
    if (_ST != "NULL")
    {
        std::cout << "      stress limit for tension = " << _ST << std::endl;
    }
    if (_SC != "NULL")
    {
        std::cout << "      stress limit for compression = " << _SC << std::endl;
    }
    if (_SS != "NULL")
    {
        std::cout << "      stress limit for shear = " << _SS << std::endl;
    }
    if (_MCSID != "NULL")
    {
        std::cout << "      material coodinate system id = " << _MCSID << std::endl;
    }
    std::cout << "   }" << std::endl;
}