#include<iostream>
#include<map>
using namespace std;

typedef map<int, string> MAP_INT_STRING;

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

int main()
{
    MAP_INT_STRING mapinttostr;

    mapinttostr.insert(make_pair(1,"wxj"));

    mapinttostr.insert(pair<int, string>(2,"cx"));

    mapinttostr [3] = "bst";

    displaycontents(mapinttostr);

    return 0;
}