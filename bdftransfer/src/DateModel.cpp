#include "include/DateModel.h"

void DateModel::Transfer()
{
    //material transfer
    std::cout << "Material :" << std::endl;
    std::cout << "{" << std::endl;
    for (auto mat : _Material_dbs)
    {
        mat.MaterialDisplay();
    }
    std::cout << "}" << std::endl;
    
    //element transfer
    std::cout << "Element :" << std::endl;
    std::cout << "{" << std::endl;
    //cbar transfer
    for (auto i : _Element_dbs)
    {
        i.ElementDisplay();
    }
    std::cout << "}" << std::endl;
}

void DateModel::MAT1Catch()
{
    for (auto entry : _src_file)
    {
        if (entry[0] == "MAT1")
        {   
            MAT1 mat;
            mat._MID = entry[1];
            mat._E = entry[2];
            mat._G = entry[3];
            mat._NU = entry[4];
            mat._ROU = entry[5];
            mat._A = entry[6];
            mat._TREF = entry[7];
            mat._GE = entry[8];

            _Material_dbs.push_back(mat);
        }
    }    
}

void DateModel::CBARCatch()
{
    for (auto entry : _src_file)
    {
        if (entry[0] == "CBAR")
        {   
            for (int i = 0; i < 17; i++)
            {
                entry.push_back("NULL");
            }

            CBAR cbar;
            cbar._EID = entry[1];
            cbar._PID = entry[2];
            cbar._GA = entry[3];
            cbar._GB = entry[4];
            cbar._X1 = entry[5];
            cbar._X2 = entry[6];
            cbar._X3 = entry[7];
            cbar._OFFT = entry[8];
            cbar._PA = entry[10];
            cbar._PB = entry[11];
            cbar._W1A = entry[12];
            cbar._W2A = entry[13];
            cbar._W3A = entry[14];
            cbar._W1B = entry[15];
            cbar._W2B = entry[16];
            cbar._W3B = entry[17];

            _Element_dbs.push_back(cbar);
        }
    }    
}