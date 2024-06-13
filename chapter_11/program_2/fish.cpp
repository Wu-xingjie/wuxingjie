#include<iostream>
using namespace std;

class Fish
{
    public:
    virtual void swim()
    {
        cout << "fish swim" << endl;
    }
};

class Tuna : public Fish
{
    public:
    void swim()
    {
        cout << "tuna swim" << endl;
    }
};

class Crap : public Fish
{
    public:
    void swim()
    {
        cout << "Crap swim" << endl;
    }
};

void MakeFishSwim(Fish& fish)
{
    fish.swim();
}

int main()
{
    Fish fish;
    Tuna tuna;
    Crap crap;
    MakeFishSwim(fish);
    MakeFishSwim(tuna);
    MakeFishSwim(crap);
    return 0;
}