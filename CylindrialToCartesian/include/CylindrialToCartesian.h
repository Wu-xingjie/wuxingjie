#pragma once

#include <vector>
#include <math.h>

typedef std::vector<double> vec_double;
typedef std::vector<std::vector<double>> MATRIX;

class CylindralToCartesian
{
    public:
        CylindralToCartesian(const vec_double &G1, const vec_double &G2, const vec_double &G3);
        vec_double Transfer(const vec_double &obj_point);
        
        double ThetaOfVectors(const vec_double &vec1, const vec_double &vec2);
        vec_double CrossProduct(const vec_double &vec_1, const vec_double &vec_2);        
        MATRIX CartesianToCartesian();
    private:
        vec_double _vec1;
        vec_double _vec2;
        vec_double _vec3;

};