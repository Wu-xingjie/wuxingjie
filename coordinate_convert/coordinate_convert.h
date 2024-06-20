#ifndef __COORDINATECOVERT_H_
#define __COORDINATECONVERT_H_

#include <vector>

using namespace std;

class CartesianCoodinate
{
    private:
    vector<double> origin_;
    vector<double> base_x_;
    vector<double> base_y_;
    vector<double> base_z_;
    
    public:
    CartesianCoodinate(const vector<double>& origin,
                        const vector<double>& base_x,
                        const vector<double>& base_y,
                        const vector<double>& base_z) : origin_(origin), base_x_(base_x), base_y_(base_y), base_z_(base_z){};
};

class SphericalCoodinate : public CartesianCoodinate
{    
    private:
    vector<double> param_;

    public:
    SphericalCoodinate(const vector<double> origin, const vector<double> base_x,
                        const vector<double> base_y, const vector<double> base_z, const vector<double> param)
                        : CartesianCoodinate(origin,base_x, base_y, base_z){param_ = param;}
    
    vector<double> SphericalToCartesian(const CartesianCoodinate& obj_cartesian);
};



#endif