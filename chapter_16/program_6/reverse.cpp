#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string samplestr("hello world!");
    cout << "original version is : " << endl;
    cout << samplestr << endl;
    cout << endl;

    string::iterator num = find(samplestr.begin(),samplestr.end(),'l');
    reverse(num,samplestr.end());
    cout << "new version is : " << endl;
    cout << samplestr << endl;
    cout << endl;


    reverse(samplestr.begin(),samplestr.end());
    cout << "new version is : " << endl;
    cout << samplestr << endl;
    cout << endl;

    return 0;
}