#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

int main()
{
    vector<int> intvec(3);

    fill(intvec.begin(), intvec.end(), 9);

    intvec.resize(7);    
    fill_n(intvec.begin() + 3,4,4);
    
    for(auto elem = intvec.cbegin();
        elem != intvec.cend();
        elem++)
        {
            cout << *elem << " ";
        }
    cout << endl;

    return 0;
}