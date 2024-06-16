#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

template<typename T>
void Displaycontent (const T& container)
{
    for(auto elem = container.cbegin();
        elem != container.cend();
        elem++)
        {
            cout << *elem << " ";
        }
    cout << endl;
}

int main()
{
    vector<string> name{"jim", "jack", "sam", "anna"};

    cout << "original order of name: ";
    Displaycontent(name);

    sort(name.begin(),name.end());
    Displaycontent(name);
    
    sort(name.begin(), name.end(),
        [](const string& str1,const string& str2) ->bool
        {
            string str1LC;
            str1LC.resize(str1.size());

            transform(str1.begin(), str1.end(), str1LC.begin(), ::tolower);
            
            string str2LC;
            str2LC.resize(str2.size());

            transform(str2.begin(), str2.end(), str2LC.begin(), ::tolower);

            return (str1LC < str2LC);
        });
        Displaycontent(name);

    return 0;   
}