#include <bitset>
#include <iostream>

int main()
{
    using namespace std;

    bitset<4> fourbits;
    cout << fourbits << endl;

    bitset<5> fivebits{"10001"};
    cout << fivebits << endl;

    bitset<6> sixbits(0b100001);
    cout << sixbits << endl;

    bitset<8> eightbits(225);
    cout << eightbits << endl;

    bitset<8> cpbits(eightbits);
    cout << cpbits << endl;

    return 0;
}