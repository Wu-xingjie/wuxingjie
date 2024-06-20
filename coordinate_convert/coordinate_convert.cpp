#ifndef __COORDINATECOVERT_CPP_
#define __COORDINATECONVERT_CPP_

#include <vector>
#include "coordinate_convert.h"
#include <cmath>
#include <iostream>
//#define pi 3.14;

using namespace std;

vector<double> SphericalCoodinate::SphericalToCartesian(const CartesianCoodinate& obj_cartesian)
{
    vector<double> self_param_cartesian;
    //self param;
    self_param_cartesian.push_back(param_[0] * sin(param_[1]) * cos(param_[2]));
    self_param_cartesian.push_back(param_[0] * sin(param_[1]) * sin(param_[2]));
    self_param_cartesian.push_back(param_[0] * cos(param_[1]));

    //to object cartesian coodinate
    return self_param_cartesian;


}

typedef vector<double> vb;
int main()
{
    double pi = 3.14156;
    cout << sin(pi/6) << endl;
    vb origin{0.0, 0.0, 0.0};
    vb base_x{1.0, 0.0, 0.0};
    vb base_y{0.0, 1.0, 0.0};
    vb base_z{0.0, 0.0, 1.0};
    CartesianCoodinate cc(origin, base_x, base_y, base_z);
    vb param{1,pi/6,pi/4};
    SphericalCoodinate sc(origin, base_x, base_y, base_z, param);
    vb objc = sc.SphericalToCartesian(cc);
    for (auto elem : objc)
    {
        cout << elem << endl;
    }
    return 0;
}



#endif