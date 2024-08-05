#include "include/DATEMODEL/DateModel.h"

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
        if (entry[0] == "MAT1" || "mat1")
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