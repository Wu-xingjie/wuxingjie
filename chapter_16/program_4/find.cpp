#include<iostream>
#include<string>
using namespace std;

int main()
{
    string strsample("Good day spring! today is beautiful!");
    int charpos = strsample.find("day",0);
    if(charpos != string :: npos)
    {
        cout << "first char of day is funded in position: " << endl;
    }
    else
    {
        cout << "word day is not in strsample!" << endl;
    }
    
    while(charpos != string :: npos)
    {
        cout << "day funded at position : " << charpos << endl;
        int searchoffset = charpos + 1;
        charpos = strsample.find("day",searchoffset);
    }
    return 0;
}