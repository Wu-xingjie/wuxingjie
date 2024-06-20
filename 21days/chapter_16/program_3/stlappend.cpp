#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1("hello ");
    string str2("world");

    str1 += str2;
    cout << "str1 = " << str1 << endl;

    string str3("hi ");

    str3.append(str2);
    cout << "str3 = " << str3 << endl;

    return 0;
}