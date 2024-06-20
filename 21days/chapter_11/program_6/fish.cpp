#include<iostream>
using namespace std;

class Fish
{
    public:
    virtual void swim() = 0;
};

class Tuna : public Fish
{
    public:
    void swim()
    {
        cout << "tuna swim" << endl;
    }
};

void Makefishswim(Fish* fish)
{
    fish->swim();
}

int main()
{
    Tuna* tuna = new Tuna;
    Makefishswim(tuna);
    return 0;
}