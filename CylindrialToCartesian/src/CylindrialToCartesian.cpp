#include "../include/CylindrialToCartesian.h"

CylindralToCartesian::CylindralToCartesian(const vec_double &G1, const vec_double &G2, const vec_double &G3)
{
    for (int i = 0; i < 3; i++)
    {
        _vec1[i] = G2[i] - G1[i];
    }

    vec_double temp_vec2(3);
    for (int i = 0; i < 3; i++)
    {
        temp_vec2[i] = G3[i] - G1[i];
    }
    _vec2 = CrossProduct(_vec1, temp_vec2);

    _vec3 = CrossProduct(_vec1, _vec2);
}

vec_double CylindralToCartesian::CrossProduct(const vec_double &vec_1, const vec_double &vec_2)
{
    vec_double vec_3;
    vec_3[0] = vec_1[1]*vec_2[2]-vec_1[2]*vec_2[1];
    vec_3[1] = vec_1[2]*vec_2[0]-vec_1[0]*vec_2[2];
    vec_3[2] = vec_1[0]*vec_2[1]-vec_1[1]*vec_2[0];
    return vec_3;
}

vec_double CylindralToCartesian::Transfer(const vec_double &obj_point)
{
    vec_double local_Cartesian;
    local_Cartesian.push_back(obj_point[0]*sin(obj_point[1]));
    local_Cartesian.push_back(obj_point[0]*cos(obj_point[1]));
    local_Cartesian.push_back(obj_point[2]);
}

double CylindralToCartesian::ThetaOfVectors(const vec_double &vec1, const vec_double &vec2)
{

}

MATRIX CylindralToCartesian::CartesianToCartesian()
{
    
}