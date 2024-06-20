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
    list<string> stringlist0{"bst" , "hhz" , "cx" , "wxj" , "fy" , "cm"};
    
    displaycontainer(stringlist0);
    cout << "number of stringlist : " << stringlist0.size() << endl;

    auto element = stringlist0.insert(stringlist0.begin(),"yf");

    displaycontainer(stringlist0);
    cout << "number of stringlist : " << stringlist0.size() << endl;

    stringlist0.erase(element);
    displaycontainer(stringlist0);
    cout << "number of stringlist : " << stringlist0.size() << endl;
    
    stringlist0.erase(stringlist0.begin(),stringlist0.end());
    displaycontainer(stringlist0);
    cout << "number of stringlist : " << stringlist0.size() << endl;

    return 0;
}