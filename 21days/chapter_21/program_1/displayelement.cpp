#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

template<typename T>
struct displayelem
{
    void operator() (const T& element) const
    {
        cout << element << " ";
    }
};

int main()
{
    vector<int> intvector{1,2,5,8,46,1};
    cout << "intvector contains: ";
    std::for_each(intvector.cbegin(), intvector.cend(), displayelem<int>());
    cout << endl;
    return 0;
}