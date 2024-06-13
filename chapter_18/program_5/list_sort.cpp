#include<iostream>
#include<list>
using namespace std;

template<typename T>
void displaycontainer(const T& container)
{
    auto element = container.begin();
    while(element != container.end())
    {
        cout << *element << " ";
        element++;
    }
    cout << endl;
}

bool sortpredicate_descent(const int& lhs,const int& rhs)
{
    return (lhs>rhs);
}

int main()
{

    list<int> intlist{1,5,3,6,8,4,45,2};
    displaycontainer(intlist);

    intlist.sort();
    displaycontainer(intlist);

    intlist.sort(sortpredicate_descent);
    displaycontainer(intlist);

    return 0;
}