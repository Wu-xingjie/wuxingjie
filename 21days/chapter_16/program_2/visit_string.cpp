#include<iostream>
#include<string>
using namespace std;

int main()
{
    string stlstring("hello world");
    cout << "Display elements in stlstring by array_systax:" << endl;
    for(int i = 0;i < stlstring.length();i++)
    {
        cout << "stlstring[" << i << "]=" << stlstring[i] << endl;  
    }

    cout << "Display elements in stlstring by iterators:" << endl;
    string::const_iterator charLocator;
    int charOffset = 0;
    for(auto charLocator = stlstring.cbegin();
        charLocator != stlstring.cend();
        charLocator++)
    {
        cout << "stlstring[" << charOffset++ << "]=" << *charLocator << endl;
    }
    return 0;
}