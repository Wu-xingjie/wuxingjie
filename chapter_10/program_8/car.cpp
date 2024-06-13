#include<iostream>
using namespace std;

class Motor
{
    public:
    void SwitchIgnition()
    {
        cout << "Ignition on" << endl;
    }
    void PumpFuel()
    {
        cout << "Fuel in cylinders" << endl;
    }
    void FireCylinders()
    {
        cout << "VROOOM" << endl;
    }
};

class Car : private Motor
{
    public:
    void Move()
    {
        SwitchIgnition();
        PumpFuel();
        FireCylinders();
    }
};

int main()
{
    Car mydreamcar;
    mydreamcar.Move();
    //mydreamcar.FireCylinders();
    return 0;
}