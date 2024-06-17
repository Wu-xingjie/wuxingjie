#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

template<typename T>
void Displaycontents(const T& container)
{
    for(auto elem = container.cbegin();
        elem != container.cend();
        elem++)
        {
            cout << *elem << " ";
        }
    cout << endl;
}

int main()
{
    vector<int> intvec{1,5,8,31,2,5,4,6,2,9,9,9};
    list<int> intlist{2,5,4};

    cout << "intvec: ";
    Displaycontents(intvec);

    cout << "intlist:L ";
    Displaycontents(intlist);

    auto range = search(intvec.cbegin(),
                        intvec.cend(),
                        intlist.cbegin(),
                        intlist.cend());
    if(range != intvec.cend())
    {
        cout << "sequence is in vector's " << distance(intvec.cbegin(),range) << endl;
    }

    auto threenine = search_n(intvec.cbegin(),
                              intvec.cend(),
                              3,
                              9);
    if(threenine != intvec.cend())
    {
        cout << "sequence is in vector's " << distance(intvec.cbegin(),threenine) << endl;
    }

    return 0;
}