#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "abcdefg";
    int loc = str.find("d");
    if (loc == string::npos)
    {
        cout << "not found" << endl;
    }
    else
    {
        str.erase(loc, str.size());
        cout << str << endl;
    }
    return 0;
}