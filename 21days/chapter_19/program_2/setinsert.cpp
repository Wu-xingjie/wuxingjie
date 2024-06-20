#include<set>
#include<iostream>
using namespace std;

template<typename T>
void displaystl(const T& container)
{
    for(auto element = container.begin();
        element !=container.end();
        element++)
    {
        cout << *element << " ";
    }
    cout << endl;
}

int main()
{
    multiset<int> intset{1,4,2,5,6,7,2,5,4,8,6,9,4};
    cout << "initial intset: " ;
    displaystl(intset);

    intset.insert(intset.begin(),-45);
    cout << "new intset: ";
    displaystl(intset);

    return 0;
}