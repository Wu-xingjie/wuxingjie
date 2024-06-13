#include<iostream>
#include<string>
using namespace std;

#define ARRAY_VALUE 25
#define PI 3.14

int main()
{
    int number[ARRAY_VALUE] = {0};
    cout << "sizeof(number) = " << sizeof(number) << endl;

    cout << "Enter a radius : ";
    double radius = 0;
    cin >> radius;
    cout << "area is " << PI*radius*radius << endl;
    return 0;
}