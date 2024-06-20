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

    void Swim()
    {
        cout << "Tuna swim in sea!" << endl;
    }
};

class Crap : public Fish
{
    public:
    Crap():Fish(true){};

    void Swim()
    {
        cout << "Crap swim in lake!" << endl;
    }
};

int main()
{
    Crap mylunch;
    Tuna mydinner;

    mylunch.Swim();
    mydinner.Swim();

    mylunch.Fish::Swim();
    mylunch.Fish::Swim();

    //mydinner.isFreshWaterFish=false;

    return 0;
}