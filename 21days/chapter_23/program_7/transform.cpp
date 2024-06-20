#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <functional>

int main()
{
    using namespace std;

    string str{"this is a TEst string"};
    cout << "test string: " << str << endl;

    string lowstr;
    lowstr.resize(str.size());

    transform(str.begin(),
            str.end(),
            lowstr.begin(),
            ::tolower);
    cout << "lowstr: " << lowstr << endl;

    vector<int> intvec{54,1,2,6,3,4,578};
    vector<int> intvec1(intvec.size(), 1);

    deque<int> result;
    result.resize(intvec.size());

    transform(intvec.cbegin(), intvec.cend(),
                intvec1.cbegin(), result.begin(),
                 [](const int& num1, const int& num2){return num1 + num2;});
    for(auto elem = result.cbegin();
        elem != result.cend();
        elem++)
        {
            cout << *elem << " ";
        }
    cout << endl;

    return 0;
}