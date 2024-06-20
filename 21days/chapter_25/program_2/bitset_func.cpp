#include <iostream>
#include <bitset>
#include <string>

int main()
{
    using namespace std;

    bitset<8> inputbit;
    cout << "input 8-bit sequence: ";
    cin >> inputbit;

    cout << "num 1s you supplied: " << inputbit.count() << endl;

    return 0;
}