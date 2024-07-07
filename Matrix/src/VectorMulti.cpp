#include "../include/VectorMulti.h"

double VectorMulti::Multi(const VEC& vec1, const VEC& vec2)
{
    double result = 0;
    
    for (int i = 0; i < vec1.size(); i++)
    {
        result += vec1.at(i) * vec2.at(i);
    }

    return result;
}