#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> intvec{15,3,5,68,4,6,5,2,19,66};

    cout << "input number you want to find: ";
    int number;
    cin >> number;

    auto elemfind = find(intvec.cbegin(), intvec.cend(),
                        number);
    if(elemfind != intvec.end())
    {
        cout << "the number is in the vector" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    cout << "input divisor: ";
    int divisor;
    cin >> divisor;

    auto numfind = find_if(intvec.cbegin(), intvec.cend(),
                            [divisor](const int& elem){return (elem % divisor == 0);});
    if(numfind != intvec.end())
    {
        cout << "the number is in the vector" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}