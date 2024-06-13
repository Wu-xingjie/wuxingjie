#include<iostream>
#include<vector>
using namespace std;

template<typename T>
void displayvector(const vector<T>& Tvector)
{
    auto element = Tvector.begin();
    while(element != Tvector.end())
    {
        cout << *element << " ";
        element++;
    }
    cout << endl;
}

int main()
{
    vector<double> dvector{1.12,5.1,53.46,0.1};
    displayvector(dvector);

    dvector.pop_back();
    displayvector(dvector);

    return 0;
}