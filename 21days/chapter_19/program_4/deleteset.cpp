#include<iostream>
#include<set>
using namespace std;
typedef multiset<int> intmultiset;

template<typename T>
void dispalaycontents(const T& container)
{
    for(auto elements = container.cbegin();
        elements != container.cend();
        elements++)
    {
        cout << *elements << " ";
    }
    cout << endl;
}

typedef multiset<int> intmultiset;

int main()
{
    intmultiset msetint{1,2,8,5,6,4,2,3,4,8,5};

    cout << "original msetint: ";
    dispalaycontents(msetint);

    msetint.erase(2);

    cout << "msetint after 2 was deleted: ";
    dispalaycontents(msetint);

    msetint.erase(msetint.cbegin(),msetint.cend());
    dispalaycontents(msetint);

    return 0;
}