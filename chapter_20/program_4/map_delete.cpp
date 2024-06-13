#include<map>
#include<iostream>
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
    multimap<int, string> mapinttostring;
    mapinttostring.insert(pair(1,"wxj"));
    mapinttostring.insert(pair(2,"cx"));
    mapinttostring.insert(pair(3,"bst"));

    cout << "map contains " << mapinttostring.size() << "key-value pairs!" << endl;
    cout << "they are: " << endl;
    displaycontents(mapinttostring);

    cout << "input key you want to delete: ";
    int num = -1;
    cin >> num;

    auto elem = mapinttostring.find(2);
    if(elem != mapinttostring.end())
    {
        mapinttostring.erase(elem);
        displaycontents(mapinttostring);
    }
    else
    {
        cout << "not found!" << endl;
    }

    return 0;
}