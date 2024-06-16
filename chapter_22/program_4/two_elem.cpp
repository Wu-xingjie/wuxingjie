#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> vec1{12,32,34,5,46,43,2,3};
    vector<int> vec2{3,4,2,5,3,4,4,2};
    vector<int> result;

    result.resize(vec1.size());

    transform(vec1.cbegin(),
              vec1.cend(),
              vec2.cbegin(),
              result.begin(),
              [](const int& num1,const int& num2){return num1 * num2;});
    cout << "vec1: ";
    for(auto elem = vec1.cbegin();elem != vec1.cend();elem++)
    {
        cout << *elem << " ";
    }
    cout << endl;

    cout << "vec2: ";
    for(auto elem = vec2.cbegin();elem != vec2.cend();elem++)
    {
        cout << *elem << " ";
    }
    cout << endl;

    cout << "result: ";
    for(auto elem = result.cbegin();elem != result.cend();elem++)
    {
        cout << *elem << " ";
    }
    cout << endl;

    return 0;   
}