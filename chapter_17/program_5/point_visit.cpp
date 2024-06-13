#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> intvector{1,2,5,3,46,7};
    auto elements =intvector.begin();

    while(elements != intvector.end())
    {
        cout << *elements << " ";
        elements++;
    }    
    cout << endl;

    return 0;
}