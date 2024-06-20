#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> intset{1,2,5,6,8,9,11,55,889,45};

    cout << "original intset: ";
    for(auto elements = intset.cbegin();
        elements != intset.cend();
        elements++)
    {
        cout << *elements << " ";
    }
    cout << endl;

    auto elementfind0 = intset.find(889);

    if(elementfind0 != intset.cend())
    {
        cout << "889 is found in " << endl; 
    }
    else
    {
        cout << "889 is not found" << endl;
    }

    auto elementfind = intset.find(999);

    if(elementfind != intset.cend())
    {
        cout << "999 is found " << endl; 
    }
    else
    {
        cout << "999 is not found" << endl;
    }

    return 0;
}