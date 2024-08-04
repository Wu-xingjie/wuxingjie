#include "include/DATEMODEL/DateModel.h"

void DateModel::Show()
{
    for (auto mat : _Material_dbs)
    {
        mat.display();
    }
}