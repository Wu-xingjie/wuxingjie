#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

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
    vector<int> intvec{1,5,4,87,6,3};
    cout << "intvec: ";
    DisplayContents(intvec);

    vector<int> cpintvec(intvec.size() * 2);
    auto lastelement = copy(intvec.cbegin(), intvec.cend(), cpintvec.begin());
    cout << "cpintvec: ";
    DisplayContents(cpintvec);

    copy_if(intvec.cbegin(), intvec.cend(), lastelement,
            [](int elem){return ((elem % 2) != 0);});
    cout << "now intvec: ";
    DisplayContents(cpintvec);

    auto newEnd = remove (cpintvec.begin(), cpintvec.end(), 0);
    newEnd = remove_if(cpintvec.begin(),cpintvec.end(),
                        [](int elem){return ((elem % 2) !=0);});
    DisplayContents(cpintvec);

    return 0;

}