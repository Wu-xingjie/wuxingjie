#include<list>
#include<iostream>
using namespace std;

template<typename T>
void display(const T& container)
{
    for (auto element = container.begin();
        element != container.end();
        element++)
    {
        cout << *element << " ";
    }
    cout << endl;
}

int main()
{
    list<int> intlist(10,3);
    
    intlist.push_back(23);
    intlist.push_back(43);
    intlist.push_front(2);
    intlist.push_front(43);

    display(intlist);

    return 0;
}