#include "include/cbar.h"

void CBAR::ElementDisplay()
{
    std::cout << "   Element_" << _EID << std::endl;
    std::cout << "   {" << std::endl;
    if (_PID != "NULL")
    {
        std::cout << "      propoty id = " << _PID << std::endl;
    }
    if (_GA != "NULL")
    {
        std::cout << "      grid A = " << _GA << std::endl;
    }
    if (_GB != "NULL")
    {
        std::cout << "      grid B = " << _GB << std::endl;
    }
    if (_X1 != "NULL")
    {
        std::cout << "      component_1 = " << _X1 << std::endl;
    }
    if (_X2 != "NULL")
    {
        std::cout << "      component_1 = " << _X2 << std::endl;
    }
    if (_X3 != "NULL")
    {
        std::cout << "      component_1 = " << _X3 << std::endl;
    }
    if (_OFFT != "NULL")
    {
        std::cout << "      OFFT = " << _OFFT << std::endl;
    }
    if (_PA != "NULL")
    {
        std::cout << "      pin flags for bar ends A = " << _PA << std::endl;
    }
    if (_PB != "NULL")
    {
        std::cout << "      pin flags for bar ends B = " << _PB << std::endl;
    }
    if (_W1A != "NULL")
    {
        std::cout << "      W1A = " << _W1A << std::endl;
    }
    if (_W2A != "NULL")
    {
        std::cout << "      W2A = " << _W2A << std::endl;
    }
    if (_W3A != "NULL")
    {
        std::cout << "      W3A = " << _W3A << std::endl;
    }
    if (_W1B != "NULL")
    {
        std::cout << "      _W1B = " << _W1B << std::endl;
    }
    if (_W2B != "NULL")
    {
        std::cout << "      W2B = " << _W2B << std::endl;
    }
    if (_W3B != "NULL")
    {
        std::cout << "      W3B = " << _W3B << std::endl;
    }
    std::cout << "   }" << std::endl;
}