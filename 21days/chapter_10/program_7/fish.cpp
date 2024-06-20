#include<iostream>
using namespace std;

class Fish
{
    private:
    bool isFreshWaterFish;

    public:
    Fish(bool isfreshwater):isFreshWaterFish(isfreshwater)
    {
        cout << "Fish's constructor!" << endl;
    };

    ~Fish()
    {
        cout << "Fish's destructor!" << endl;
    }
    
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
    Crap():Fish(true)
    {
        cout << "Crap's constructor!" << endl;
    }

    ~Crap()
    {
        cout << "Crap's destructor!" << endl;
    }

    void Swim()
    {
        cout << "Crap swim in lake!" << endl;
    }
};

int main()
{
    Crap mylunch;



    //mydinner.isFreshWaterFish=false;

    return 0;
}