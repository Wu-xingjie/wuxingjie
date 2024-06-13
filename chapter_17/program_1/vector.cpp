#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> intergers;
    vector<int> initvector{1,2,3};
    vector<int> tenelements(10);
    vector<int> copyvector(initvector);
    vector<int> partialvector(tenelements.begin(),tenelements.begin()+5);


    return 0;
}