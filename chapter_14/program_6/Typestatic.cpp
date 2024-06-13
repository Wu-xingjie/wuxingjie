#include<iostream>
using namespace std;

template<typename T>
class Typestatic
{
    public:
    static int staticval;
};
template<typename T> int Typestatic<T>::staticval;

int main()
{
    Typestatic<int> intinstance;
    intinstance.staticval = 2101;

    Typestatic<double> doubleinstance;
    doubleinstance.staticval = 1010;

    Typestatic<double> doubleinstance0;

    cout << "intinstance' staticval is " << intinstance.staticval << endl;
    cout << "doubleinstance's staticval is " << doubleinstance.staticval << endl;
    cout << "doubleinstance0's staticval is " << doubleinstance0.staticval << endl;

    return 0;
}