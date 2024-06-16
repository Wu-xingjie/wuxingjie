#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

int main()
{
    vector<int> intvector{1,3,2,4,6,3,22,6};
    for_each(intvector.cbegin(), intvector.cend(), [](const int& elem){cout << *elem << " ";});
    cout << endl;

    list<char> charlist{'a','e','y','q'};
    for_each(charlist.cbegin(), charlist.cend(), [](auto& elem){cout << *elem << " ";});
    cout << endl;

    return 0;
}