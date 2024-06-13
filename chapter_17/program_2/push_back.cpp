#include<vector>
#include<iostream>
using namespace std;

int main()
{
    vector<int> integers;
    for(int i = 0 ; i<10 ; i++)
    {
        integers.push_back(i*i);
    }
    cout << "integers contains " << integers.size() << " elements" << endl;
    
    return 0;
}