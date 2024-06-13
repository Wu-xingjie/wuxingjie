#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> intvector{1,2,3,5,4,6,8,7,6,15,3};
    for(int i = 0 ; i < intvector.size() ; i++)
    {
        cout << intvector[i] << " ";
    }
    cout << endl;

    intvector[6] = 32;
    for(int i = 0 ; i < intvector.size() ; i++)
    {
        cout << intvector[i] << " ";
    }
    cout << endl;    
    return 0;
}