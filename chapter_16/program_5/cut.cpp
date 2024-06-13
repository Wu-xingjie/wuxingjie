#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string samplestr("hello spring! wake up to a beautiful day");
    cout << "original version of samplestr is:" << endl;
    cout << samplestr << endl;
    cout << endl;

    samplestr.erase(0,6);
    cout << "new version of samplestr is:" << endl;
    cout << samplestr << endl;
    cout << endl;


    
    string::iterator ichars =find(samplestr.begin(),samplestr.end(),'s');
    if(ichars != samplestr.end())
    {
        samplestr.erase(ichars);
    }
    
    int epos = samplestr.find('e',0);
    while(epos != string::npos)
    {
        samplestr.erase(epos,1);
        cout << "new version of samplestr is:" << endl;
        cout << samplestr << endl;
        cout << endl;
        int eposoffset = epos + 1;
        epos = samplestr.find('e',eposoffset);
    }


    samplestr.erase(samplestr.begin(),samplestr.end());
    cout << "new version of samplestr is:" << endl;
    cout << samplestr << endl;
    cout << endl;

    if(samplestr.length() == 0)
    {
        cout << "samplestr is empty!" << endl;
    }
    else
    {
        cout << samplestr << endl;
    }
    return 0;
}