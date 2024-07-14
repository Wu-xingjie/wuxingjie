#include "./include/CylindrialToCartesian.h"
#define PI 3.14

int main()
{
    vec_double G1;
    vec_double G2;
    vec_double G3;
    std::vector<std::string> point_name{"G1", "G2", "G3"};
    MATRIX POINT{G1, G2, G3};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            double number = 0;
            std::cout << j << "th number of " << point_name.at(i) << ": ";
            std::cin >> number;
            POINT.at(i).push_back(number);
        }
        std::cout << std::endl;
    }

    CylindralToCartesian trans(POINT.at(0),POINT.at(1),POINT.at(2));

    trans.show_vec();
    

    vec_double obj_point;
    for (int i = 0; i < 3; i++)
    {
        double obj_number = 0;
        std::cout << i << "th number of obj_point(r,theta,z): ";
        std::cin >> obj_number;
        obj_point.push_back(obj_number);
    }

    vec_double point=trans.Transfer(obj_point);

    std::cout << "point: "; 
    for (auto elem : point)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}