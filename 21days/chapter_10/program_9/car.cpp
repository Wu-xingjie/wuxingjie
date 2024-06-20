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

class Car : protected Motor
{
    public:
    void Move()
    {
        SwitchIgnition();
        PumpFuel();
        FireCylinders();
    }
};

class RaceCar : public Car
{
    public:
    void move()
    {
        cout << "this is my racecar" << endl;
        SwitchIgnition();
        PumpFuel();
        FireCylinders();
    }
};

int main()
{
    Car mydreamcar;
    mydreamcar.Move();
    
    RaceCar myracecar;
    myracecar.move();

    return 0;
}