#include<list>
#include<vector>
using namespace std;

int main()
{
    list<int> intlist_empty;
    list<int> intlist_num(10);
    list<int> intlist_initnums(10,2);
    list<int> copylist(intlist_initnums);

    vector<int> intvector(10,2);
    list<int> vector_list(intvector.begin(),intvector.end());

    return 0;
}