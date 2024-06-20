#include<algorithm>
#include<string>
#include<vector>
#include<iostream>
using namespace std;

template<typename T>
class CompareStringNocase
{
    public:
    bool operator() (const string& str1, const string& str2)
    {
        string str1Lowercase;

        str1Lowercase.resize(str1.size());

        transform(str1.begin(), str1.end(), str1Lowercase.begin(), ::tolower);

        string str2Lowercase;

        str2Lowercase.resize(str2.size());

        transform(str2.begin(), str2.end(), str2Lowercase.begin(), ::tolower);

        return (str1Lowercase < str2Lowercase);
    }    
};

template<typename T>
void displaycontents(const T& container)
{
    for(auto elem = container.cbegin();
        elem != container.cend();
        ++elem)
    {
        cout << *elem << " ";
    }
    cout << endl;
}

int main()
{
    vector<string> names;

    names.push_back("wxj");
    names.push_back("cx");
    names.push_back("bst");

    sort(names.begin(),names.end());
    displaycontents(names);

    sort(names.begin(), names.end(),CompareStringNocase<string>());
    displaycontents(names);

    return 0;
}