#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    vector<string> a{"1324e", "4324", "4564"};
    cout << a[1] << endl;
    a.erase(a.begin()+1);
    for (auto elem : a)
    {
        cout << elem << ", ";
    }
    cout << endl;

    return 0;
}