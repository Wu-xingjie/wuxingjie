#include<iostream>
using namespace std;

template<typename T1 , typename T2 , typename T3>
void SUM(T1& value1,const T2& value2,const T3& value3)
{
    value1 = value2 + value3;
}

template<typename T1, typename T2 ,typename... Rest>
void SUM(T1& result , T2 val1 , Rest... valn)
{
    result = result +val1;
    return SUM(result,valn...);
}

int main()
{
    double a = 0;
    SUM(a,153,1233.2);
    cout << "a is " << a << endl;

    double result = 0;
    SUM(result,12,51.2,21.3,324);
    cout << "result is " << result << endl;
    return 0;
}