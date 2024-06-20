#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

bool iseven(const int& num)
{
    return (num % 2 ==0);
}

template <typename T>
void DisplayContents(const T& container)
{
    for(auto elem = container.begin();
        elem != container.end();
        elem++)
        {
            cout << *elem << " ";
        }
    cout << endl;
}

int main()
{
    vector<int>  intvec{1,2,4,6,8,1,45,33,26};

    cout << "initial intvec: ";
    DisplayContents(intvec);

    partition(intvec.begin(), intvec.end(), iseven);

    cout << "new intvec: ";
    DisplayContents(intvec);

    return 0;
}