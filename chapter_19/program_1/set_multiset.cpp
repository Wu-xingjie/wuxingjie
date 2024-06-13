#include<set>
using namespace std;

template<typename T>
struct sortDecending
{
    bool operator(const T& a ,const T& b)
    {
        return (a > b);
    }
};
int main()
{
    set<int> intset;
    multiset<int> intmultiset;

    set<int, sortDecending<int>> decendingintset;
    multiset<int, sortDecending<int>> decendingintmultiset;

    set<int> cintset(intset);
    multiset<int> cintmultiset(intmultiset.begin(),intmultiset.end());


    return 0;
}