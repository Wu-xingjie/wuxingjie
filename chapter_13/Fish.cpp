#include<iostream>
using namespace std;

class Fish
{
    public:
    virtual void swim()
    {
        cout << "fish swim" << endl;
    }
    virtual ~Fish(){};
};

class Tuna : public Fish
{
    public:
    void swim()
    {
        cout << "Tuna swim" << endl;
    }

    void becomedinner()
    {
        cout << "Tuna become dinner in sushi" << endl;
    }
};

class Crap : public Fish
{
    public:
    void swim()
    {
        cout << "Crap swim" << endl;
    }

    void talk()
    {
        cout << "crap talk" << endl;
    }
};

void DetectFishType(Fish* objFish)
{
    Tuna* objTuna = static_cast<Tuna*>(objFish);
    if(objTuna)
    {
        cout << "Detected Tuna.Making Tuna dinner:" << endl;
        objTuna ->becomedinner();
    }

    Crap* objCrap = dynamic_cast<Crap*>(objFish);
    if(objCrap)
    {
        cout << "Detected Crap.Making crap talk:" << endl;
        objCrap -> talk();
    }
}

int main()
{
    Crap myLunch;
    Tuna mydinner;

    DetectFishType(&mydinner);
    DetectFishType(&myLunch);

    return 0;

}






