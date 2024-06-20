#include<map>
#include<iostream>
using namespace std;

template<typename T>
struct InverseSort
{
    bool operator () (const T& key1, const T& key2)
    {
        return (key1 > key2);
    }
};

int main()
{
    map<int, string> mapinttostring1;

    map<int, string> mapinttostring2(mapinttostring1);

    map<int, string> mapinttostring3(mapinttostring1.cbegin(),mapinttostring1.cend());

    map<int, string, ReverseSort<int>> mapinttostring4(mapinttostring1.cbegin(),mapinttostring1.cend());

    return 0;
}