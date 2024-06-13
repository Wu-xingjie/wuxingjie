#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;

template<typename T>
void displaycontents(const T& cont)
{
    for(auto ielement = cont.cbegin();
        ielement != cont.cend();
        ielement++)
    {
        cout << ielement->first << "->" << ielement->second << endl;
    }
}

struct predicate
{
    bool operator() (const string& str1, string& str2)
    {
        string str1Nocase(str1), str2Nocase(str2);
        transform(str1.begin(),str1.end(),str1Nocase.begin(),::tolower);
        transform(str2.begin(),str2.end(),str2Nocase.begin(),::tolower);

        return (str1Nocase < str2Nocase);

    }
};

typedef map<string, string> DIR_WITH_CASE;
typedef map<string, string, predicate> DIR_NOCASE;

int main()
{
    DIR_WITH_CASE dirwithcase;
    dirwithcase.insert(pair("wxj", "123456"));
    dirwithcase.insert(pair("cx", "456789"));

    displaycontents(dirwithcase);
    
    DIR_NOCASE dirnocase(dirwithcase.begin(), dirwithcase.end());
    displaycontents(dirnocase);

    return 0;
}

