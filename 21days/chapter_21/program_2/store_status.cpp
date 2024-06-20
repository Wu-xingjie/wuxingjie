#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

template<typename T>
struct displayelem
{
    int count;

    displayelem():count(0){}
    void operator() (const T& element)
    {
        ++count;
        cout << element << " ";
    }
};

int main()
{
    vector<int> intvector{1,2,5,8,46,1};
    displayelem<int> result;
    cout << "intvector contains: ";
    std::for_each(intvector.cbegin(), intvector.cend(), displayelem<int>());
    cout << endl;
    cout << "displayelem is used " << result.count << "times" << endl;
    return 0;
}