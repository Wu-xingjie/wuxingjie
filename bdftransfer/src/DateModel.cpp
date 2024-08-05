#include "include/DateModel.h"

void DateModel::Transfer()
{
    for (auto mat : _Material_dbs)
    {
        mat.display();
    }
}

void DateModel::MAT1Catch()
{
    for (auto entry : _src_file)
    {
        if (entry[0] == "MAT1")
        {   
            // std::cout << "..........." << entry[0] << ".............." << std::endl;
            // for (int i = 0; i < 9; i++)
            // {
            //     std::cout << entry[i] << std::endl;
            // }
            // std::cout << std::endl;




            MAT1 mat;
            mat._MID = entry[1];
            mat._E = entry[2];
            mat._G = entry[3];
            mat._NU = entry[4];
            mat._ROU = entry[5];
            mat._A = entry[6];
            mat._TREF = entry[7];
            mat._GE = entry[8];

            // std::cout << "   material_" << entry[1] << std::endl;
            // std::cout << "{" << std::endl;
            // std::cout << "MID: " << entry[1] << std::endl;
            // std::cout << "E: " << entry[2] << std::endl;
            // std::cout << "G: " << entry[3] << std::endl;
            // std::cout << "NU: " << entry[4] << std::endl;
            // std::cout << "ROU: " << entry[5] << std::endl;
            // std::cout << "A: " << entry[6] << std::endl;
            // std::cout << "TREF: " << entry[7] << std::endl;
            // std::cout << "GE: " << entry[8] << std::endl;
            // std::cout << "}" << std::endl;



            _Material_dbs.push_back(mat);
        }
    }    
}