#include<iostream>
using namespace std;

template <typename T1 = int ,typename T2 = double>
class Holdspair
{
    private:
    T1 value1;
    T2 value2;

    public:
    Holdspair(const T1& val1,const T2& val2):value1(val1),value2(val2){}
    T1 getfirstvalue(){return value1;}
    T2 getsecondvalue(){return value2;}
};

template<> class Holdspair<int , int>
{
    private:
    int value1;
    int value2;

    public:
    Holdspair(const int& val1,const int& val2): value1(val1),value2(val2){}
    int getfirstvalue()
    {
        cout << "return int" << endl;
        return value1;
    }
    int getsecondvalue(){return value2;}
};

int main()
{
    Holdspair<double,double> printdouble(1.2,15.53);
    Holdspair<int,int> printint(12,4);
    cout << printdouble.getfirstvalue() << endl;
    cout << printdouble.getsecondvalue() << endl;
    cout << printint.getfirstvalue() << endl;
    cout << printint.getsecondvalue() << endl;
    return 0;
}