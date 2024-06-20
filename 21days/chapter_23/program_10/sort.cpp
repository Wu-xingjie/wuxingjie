#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

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
    vector<string> vecnames{"wxj", "cx", "sean", "anna", "wxj"};
    cout << "initial vecnames: ";
    DisplayContents(vecnames);

    cout << "after sort: ";
    sort(vecnames.begin(), vecnames.end());
    DisplayContents(vecnames);

    bool elemfound = binary_search(vecnames.begin(), vecnames.end(), "cx");
    if(elemfound)
    {
        cout << "cx was founded" << endl;
    }
    else
    {
        cout << "cx isn't in the vector" << endl;
    }

    auto newend = unique(vecnames.begin(), vecnames.end());
    //cout << "newend: " << *newend << endl;
    vecnames.erase(newend, vecnames.end());
    

    DisplayContents(vecnames);

    return 0;
}