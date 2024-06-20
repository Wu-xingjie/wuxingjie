#include<iostream>
#include<string>
using namespace std;

#define PI 3.14
#define SQUARE(x) ((x)*(x))
#define CIRCLE_SPUARE(r) (PI*(r)*(r))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a)<(b)) ? (a) : (b))

int main()
{
    cout << "input a integer:";
    double integer = 0;
    cin >> integer;
    cout << "area is " << SQUARE(integer) << endl;

    cout << "input a radius : ";
    double radius = 0 ;
    cin >> radius;
    cout << "circle's area is " << CIRCLE_SPUARE(radius) << endl;

    cout << "input num1: ";
    double num1 = 0;
    cin >> num1;
    cout << "input num2: ";
    double num2 = 0;
    cin >> num2;
    cout << "max num is " << MAX(num1,num2) << endl;
    cout << " min num is " << MIN(num1,num2) << endl;
    
    return 0;
}