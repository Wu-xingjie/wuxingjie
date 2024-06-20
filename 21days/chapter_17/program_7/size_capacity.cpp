#include<iostream>
#include<vector>
using namespace std;

template<typename T>

void dispvector(const vector<T>& Tvector)
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
    vector<double> dvector(5);
    dispvector(dvector);

    cout << "devector.size() = " << dvector.size() << endl;
    cout << "devector.capacity() = " << dvector.capacity() << endl;

    dvector.push_back(45.2);
    cout << "devector.size() = " << dvector.size() << endl;
    cout << "devector.capacity() = " << dvector.capacity() << endl;


    return 0;
}