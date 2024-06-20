#include <algorithm>
#include <list>
#include <string>
#include <iostream>
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
    list<string> namlist{"wxj", "cx", "abd", "salf"};
    cout << "initial namlist: ";
    DisplayContents(namlist);

    cout << "namlist after sort: ";
    namlist.sort();
    DisplayContents(namlist);

    auto minpos =lower_bound(namlist.begin(), namlist.end(), "wxj");
    DisplayContents(namlist);
    cout << distance(namlist.begin(), minpos) << endl;

    auto macpos = upper_bound(namlist.begin(), namlist.end(),"wxj");
    DisplayContents(namlist);
    cout << distance(namlist.begin(), macpos) << endl;
    
    namlist.insert(minpos,"wxj");
    DisplayContents(namlist);

    return 0;
}
