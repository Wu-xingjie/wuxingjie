#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>  intvec{13,5,6,21,3,5};

    auto evennum = find_if(intvec.cbegin(),
                    intvec.cend(),
                    [](const int& num){return ((num % 2) == 0);});
    if(evennum != intvec.cend())
    {
        cout << *evennum << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}