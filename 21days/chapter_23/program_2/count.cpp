#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<typename elememttype>
bool Iseven(const elememttype& elem)
{
    return (elem % 2 == 0);
}

int main()
{
    vector<int> intvec{2017, -1, 0, 56, 5};
    size_t numzero = count(intvec.cbegin(), intvec.cend(), 0);
    cout << "number of 0 in intvec is " << numzero << endl;

    size_t numbereven = count_if(intvec.cbegin(), intvec.cend(), Iseven<int>);
    cout << "number of even in intvec is " << numbereven << endl;
    return 0;
}