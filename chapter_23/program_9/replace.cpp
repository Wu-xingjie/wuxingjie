#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void DisplayContents(const T& container)
{
    for(auto elem = container.begin();
        elem != container.end();
        elem++)
        {
            cout << *elem << " ";
        }
    cout << endl;
}

int main()
{
    vector<int> intvec(6);
    fill(intvec.begin(), intvec.begin() + 3, 8);
    fill_n(intvec.begin() + 3, 3, 5);
    DisplayContents(intvec);

    random_shuffle(intvec.begin(), intvec.end());
    cout << "initial intvec: ";
    DisplayContents(intvec);

    replace(intvec.begin(), intvec.end(), 5, 8);
    DisplayContents(intvec);
    
    replace_if(intvec.begin(), intvec.end(), [](const int& num){return (num % 2 == 0);}, -1);
    DisplayContents(intvec);

    return 0;
}