#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string samplestr("this is a STL string sample!");
    cout << "original version is :" << endl;
    cout << samplestr << endl;
    cout << endl;

    transform(samplestr.begin(),samplestr.end(),samplestr.begin(),::toupper);
    cout << "original version is :" << endl;
    cout << samplestr << endl;
    cout << endl;



    return 0;
}