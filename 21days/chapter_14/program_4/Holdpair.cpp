#include<iostream>
using namespace std;

template <typename T1 = int ,typename T2 = double>
class Holdpairs
{
    private:
    T1 value1;
    T2 value2;
    
    public:
    Holdpairs(const T1& val1,const T2& val2) : value1(val1),value2(val2){}
    T1 getfirstvalue(){return value1;}
    T2 getsecondvalue(){return value2;}
};

int main()
{
    Holdpairs<> pairindb1(12,13.2);
    cout << "value1 = " << pairindb1.getfirstvalue() << endl;
    cout << "value2 = " << pairindb1.getsecondvalue() << endl;

    return 0;
}