#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<ctime>
using namespace std;

template<typename T>
void showelem(const T& vec)
{
    for(auto elem = vec.cbegin();
        elem != vec.cend();
        elem++)
        {
            cout << *elem << endl;
        }
}

int main()
{
    srand(time(NULL));
    vector<int> intvec(5);
    generate(intvec.begin(), intvec.end(), rand);
    showelem(intvec);

    list<int> intlist(5);
    generate_n(intlist.begin(), 5, rand);
    showelem(intlist);

    return 0;
}