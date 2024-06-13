#include<iostream>
using namespace std;

class Fish
{
    public:
    bool isFreshWaterFish;

    void Swim()
    {
        if(isFreshWaterFish)
        {
            cout << "swims in lake!" << endl;
        }
        else
        {
            cout << "swims in sea!" << endl;
        }
    }
};

class Tuna : public Fish
{
    public:
    Tuna()
    {
        isFreshWaterFish = false;
    }
};

class Crap : public Fish
{
    public:
    Crap()
    {
        isFreshWaterFish = true;
    }
};

int main()
{
    Crap mylunch;
    Tuna mydinner;

    cout << "mylunch ";
    mylunch.Swim();
    cout << "mydinner "; 
    mydinner.Swim();

    return 0;
}