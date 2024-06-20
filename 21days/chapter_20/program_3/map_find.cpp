#include<iostream>
#include<map>
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

int main()
{
    map<int, string> mapinttostring;
    mapinttostring.insert(pair(1,"wxj"));
    mapinttostring.insert(pair(2,"cx"));
    mapinttostring.insert(pair(3,"bst"));

    cout << "input the key: ";
    int key0;
    cin >> key0;

    auto elem = mapinttostring.find(key0);

    cout << elem->second << endl;

    return 0;
}