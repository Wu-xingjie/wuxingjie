#include<iostream>
#include<vector>
using namespace std;

void displayvector(const vector<int>& invec)
{
    auto elements =invec.begin();
    while (elements != invec.end())
    {
        cout << *elements << " ";
        elements++;
    }
    cout << endl;

}

int main()
{
    vector<int> intvector{1,3,96,2,6,3,5};
    
    intvector.insert(intvector.begin(),0);
    displayvector(intvector);

    intvector.insert(intvector.begin()+4,100);
    displayvector(intvector);

    vector<int> intvector0{0,1,2,3};
    intvector.insert(intvector.begin()+3,intvector0.begin(),intvector0.end());
    displayvector(intvector);

    return 0;
}