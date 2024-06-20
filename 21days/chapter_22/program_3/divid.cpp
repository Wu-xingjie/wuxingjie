#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>  intvec{13,5,6,21,3,5};

    cout << "input divisor: ";
    int devisor;
    cin >> devisor;

    auto evennum = find_if(intvec.cbegin(),
                    intvec.cend(),
                    [devisor](const int& num){return ((num % devisor) == 0);});
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