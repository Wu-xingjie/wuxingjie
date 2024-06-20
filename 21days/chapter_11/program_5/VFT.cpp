#include<iostream>
using namespace std;

class SimpleClass
{
    private:
    int a , b;
    public:
    void dosomething();
};

class Base
{
    private:
    int a , b;
    public:
    virtual void dosomething(){}
};

int main()
{
    cout << "sizeof(SimpleClass) = " << sizeof(SimpleClass) << endl;
    cout << "sizeof(Base) = " << sizeof(Base) << endl;
    return 0;
}