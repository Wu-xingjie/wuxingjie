#include<algorithm>
#include<string>
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