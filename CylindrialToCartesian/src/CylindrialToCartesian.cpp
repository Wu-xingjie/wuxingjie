#include "../include/CylindrialToCartesian.h"


std::ostream& CylindralToCartesian::operator<<(std::ostream &output)
{
    MATRIX VEC{_vec1, _vec2, _vec3, _local_point};
    for (auto elem : VEC)
    {
        for (auto number : elem)
        {
            std::cout << number << ", ";
        }
        std::cout << std::endl;
    }
    return output;
}

CylindralToCartesian::CylindralToCartesian(const vec_double &G1, const vec_double &G2, const vec_double &G3)
{
    _local_point = G1;

    // for (auto elem : _local_point)
    // {
    //     std::cout << elem << " ";
    // }
    // std::cout << std::endl;

    for (int i = 0; i < 3; i++)
    {
        _vec1.push_back(G2[i] - G1[i]);
    }

    for (auto elem : _vec1)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    vec_double temp_vec2;
    for (int i = 0; i < 3; i++)
    {
        temp_vec2.push_back(G3[i] - G1[i]);
    }

    // for (auto elem : temp_vec2)
    // {
    //     std::cout << elem << " ";
    // }
    // std::cout << std::endl;

    _vec2 = CrossProduct(_vec1, temp_vec2);

    for (auto elem : _vec2)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    _vec3 = CrossProduct(_vec1, _vec2);
    
    for (auto elem : _vec3)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

vec_double CylindralToCartesian::CrossProduct(const vec_double &vec_1, const vec_double &vec_2)
{
    vec_double vec_3;
    vec_3.push_back(vec_1[1]*vec_2[2]-vec_1[2]*vec_2[1]);
    vec_3.push_back(vec_1[2]*vec_2[0]-vec_1[0]*vec_2[2]);
    vec_3.push_back(vec_1[0]*vec_2[1]-vec_1[1]*vec_2[0]);
    return vec_3;
}

double CylindralToCartesian::ThetaOfVectors(vec_double &vec1, vec_double &vec2)
{
    double temp_vec1 = 0;
    for (int i = 0; i < 3; i++)
    {
        temp_vec1 += vec1.at(i) * vec1.at(i);
    }
    double vec1_abs = sqrt(temp_vec1);

    for (int i = 0; i < 3; i++)
    {
        vec1.at(i) = vec1.at(i)/vec1_abs;
    }

    double temp_vec2 = 0;
    for (int i = 0; i < 3; i++)
    {
        temp_vec2 += vec2.at(i) * vec2.at(i);
    }
    double vec2_abs = sqrt(temp_vec2);
    for (int i = 0; i < 3; i++)
    {
        vec2.at(i) = vec2.at(i) / vec2_abs;
    }
    
    return asin(InnerProduct(vec1, vec2)); 
}

double CylindralToCartesian::InnerProduct(const vec_double &vec1, const vec_double &vec2)
{
    double inner_product = 0;
    for (int i = 0; i < 3; i++)
    {
        inner_product += vec1.at(i) * vec2.at(i);
    }
    return inner_product;
}

MATRIX CylindralToCartesian::CartesianToCartesian()
{
    MATRIX RotationTransfer;

    vec_double Global_x{1,0,0};
    vec_double Global_y{0,1,0};
    vec_double Global_z{0,0,1};
    MATRIX GlobalCoordinate{Global_x, Global_y, Global_z};
    MATRIX LocalCoordinate{_vec1, _vec2, _vec3};
    for (int row = 0; row < 3; row++)
    {
        vec_double ROW;
        for (int col = 0; col < 3; col++)
        {
            ROW.push_back(ThetaOfVectors(GlobalCoordinate.at(row), LocalCoordinate.at(col)));
        }
        RotationTransfer.push_back(ROW);
    }

    return RotationTransfer;
}


vec_double CylindralToCartesian::Transfer(const vec_double &obj_point)
{
    vec_double local_Cartesian;
    local_Cartesian.push_back(obj_point[0]*sin(obj_point[1]));
    local_Cartesian.push_back(obj_point[0]*cos(obj_point[1]));
    local_Cartesian.push_back(obj_point[2]);

    MATRIX RotationMatrix = CartesianToCartesian();

    vec_double coordinate_rotation;
    for (int i = 0; i < 3; i++)
    {
        coordinate_rotation.push_back(InnerProduct(RotationMatrix.at(i), local_Cartesian));
    }
    
    vec_double result;
    for (int i = 0; i < 3; i++)
    {
        result.push_back(_local_point.at(i) + coordinate_rotation.at(i));
    }
    
    return result;
}