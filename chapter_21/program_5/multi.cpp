#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<typename T>
struct Multiply
{
    T operator()(const T& elem1, const T& elem2)
    {
        return (elem1 * elem2);
    }
};

int main()
{
    vector<int> multiplicands{0,1,2,3,4,5,6};
    vector<int> multipliers{3,4,5,6,7,8,9};
    vector<int> result;

    result.reserve(multiplicands.size());

    transform (multiplicands.begin(),
            multiplicands.end(),
            multipliers.begin(),
            result.begin(),
            Multiply<int>());

    for(int index = 0; index < multiplicands.size(); index++)
    {
        cout << multiplicands[index] << " ";
    } 
    cout << endl;

    for(int index = 0; index < multiplicands.size(); index++)
    {
        cout << multipliers[index] << " ";
    } 
    cout << endl;

    for(int index = 0; index < multiplicands.size(); index++)
    {
        cout << result[index] << " ";
    } 
    cout << endl;



    return 0;
}