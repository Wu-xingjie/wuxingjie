#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<typename T>
struct IsMultiple
{
    T Divisor;
    IsMultiple(const T& divisor)
    {
        Divisor = divisor;
    }

    bool operator() (const T& divisor) const
    {
        return (Divisor % divisor == 0); 
    }
};

int main()
{
    vector<int> numvector{4,5,6,8,7,45,4};

    cout << "input divisor: " ;
    int divisor;
    cin >> divisor;

    auto elem = find_if(numvector.cbegin(),numvector.cend(),IsMultiple<int>(divisor));
    
    if(elem != numvector.cend())
    {
        cout << *elem << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}