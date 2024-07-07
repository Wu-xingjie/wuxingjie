#include <iostream>
#include "../include/VectorMulti.h"
using namespace std;

int main()
{
    VEC a{1,2,3};
    VEC b{3,5,3};
    VectorMulti c;
    cout << c.Multi(a,b) << endl;


    return 0;
}