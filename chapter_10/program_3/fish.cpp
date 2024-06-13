#include<iostream>
using namespace std;

class Fish
{
    private:
    bool isFreshWaterFish;

    public:
    Fish(bool isfreshwater):isFreshWaterFish(isfreshwater){};
    
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
    Tuna():Fish(false){};
};

class Crap : public Fish
{
    public:
    Crap():Fish(true){};
};

int main()
{
    Crap mylunch;
    Tuna mydinner;

    cout << "mylunch ";
    mylunch.Swim();
    cout << "mydinner "; 
    mydinner.Swim();

    //mydinner.isFreshWaterFish=false;

    return 0;
}