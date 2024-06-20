#include<iostream>
using namespace std;

class Fish
{
    public:
    virtual Fish* clone() = 0;
    virtual void swim() = 0;
    virtual ~Fish(){};
};

class Tuna : public Fish
{
    public:
    Fish* clone() override
    {
        return new Tuna(*this);
    }
    void swim() override
    {
        cout << "tuna swim" << endl;
    }
};

class Crap : public Fish
{
    public:
    Fish* clone() override
    {
        return new Crap(*this);
    }
    void swim() override final
    {
        cout << "crap swim" << endl;
    }
};

class BluefinTuna final : public Fish
{
    Fish* clone() override
    {
        return new BluefinTuna(*this);
    }
    void swim() override
    {
        cout << "bluefintuna swm" << endl;
    }
};

int main()
{
    const int ARRAY_SIZE = 4;

    Fish* myFishs[ARRAY_SIZE];
    myFishs[0] = new Tuna();
    myFishs[1] = new Crap();
    myFishs[2] = new BluefinTuna();
    myFishs[3] = new Crap();

    Fish* mynewfishs[ARRAY_SIZE];
    for(int i = 0;i<ARRAY_SIZE;i++)
    {
        mynewfishs[i] = myFishs[i]->clone();
    }

    for(int i = 0;i<ARRAY_SIZE;i++)
    {
        myFishs[i]->swim();
    }

    for(int i = 0;i<ARRAY_SIZE;i++)
    {
        mynewfishs[i]->swim();
    }

    return 0;
}