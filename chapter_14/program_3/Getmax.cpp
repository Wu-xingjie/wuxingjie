#include<iostream>
using namespace std;

template <typename type>
type Getmax(const type& num1,const type& num2)
{
    return (num1 > num2) ? num1 : num2 ;
}

template <typename type>
void DisplayComparision(const type& value1,const type& value2)
{
    cout << "result is " ;
    cout << Getmax(value1,value2) << endl;
}

int main()
{
    double num1 = 12.4;
    double num2 = 32.4;
    DisplayComparision(num1,num2);

    string str1 = "jack";
    string str2 = "iccce";
    DisplayComparision(str1,str2);

    return 0;
}