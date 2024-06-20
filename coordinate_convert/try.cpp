#include <iostream>
#include "coordinate_convert.h"
#include "coordinate_convert.cpp"

typedef vector<double> vb;
int main()
{
    vb origin{0.0, 0.0, 0.0};
    vb base_x{1.0, 0.0, 0.0};
    vb base_y{1.0, 0.0, 0.0};
    vb base_z{1.0, 0.0, 0.0};
    CartesianCoodinate cc(origin, base_x, base_y, base_z);
    vb param{1.0,5.0,3.0};
    SphericalCoodinate sc(origin, base_x, base_y, base_z, param);
    vb objc = sc.SphericalToCartesian(cc);
    for (auto elem = objc.cbegin(); elem != objc.cend(); elem++)
    {
        cout << *elem << " ";
    }
    cout << endl;
    return 0;
}