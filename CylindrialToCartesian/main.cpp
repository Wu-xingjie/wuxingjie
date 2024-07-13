#include "./include/CylindrialToCartesian.h"
#define PI 3.14

int main()
{
    vec_double G1{0,1,1};
    vec_double G2{1,1,1};
    vec_double G3{0,2,1};
    vec_double obj_point{1, PI/2, 1};

    CylindralToCartesian trans(G1,G2,G3);
    vec_double point=trans.Transfer(obj_point);

    for (auto elem : point)
    {
        std::cout << "point:" << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}