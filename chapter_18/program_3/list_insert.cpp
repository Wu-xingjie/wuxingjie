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

int main()
{
    list<int> intlist{1,2,5,6,3,7,1,5};

    intlist.insert(intlist.begin(),45);
    displaycontainer(intlist);

    intlist.insert(intlist.end(),153);
    displaycontainer(intlist);

    list<double> doublelist;
    
    doublelist.insert(doublelist.begin(),3,2);
    displaycontainer(doublelist);

    list<double> doublelist1;
    
    doublelist1.insert(doublelist1.begin(),doublelist.begin(),doublelist.end());
    displaycontainer(doublelist1);
    
    return 0;
}