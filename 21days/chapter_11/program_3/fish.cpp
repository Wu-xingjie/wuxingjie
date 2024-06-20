#include<iostream>
using namespace std;

class Fish
{
    public:
    Fish()
    {
        cout << "Fish constructor!" << endl;
    }
    ~Fish()
    {
        cout << "Fish destuchor!" << endl;
    }
};

class Tuna : public Fish
{
    public:
    Tuna()
    {
        cout << "Tuna constructor!" << endl;
    }
    ~Tuna()
    {
        cout << "Tuna destuchor!" << endl;
    }

};

class Crap : public Fish
{
    public:
    Crap()
    {
        cout << "Crap constructor!" << endl;
    }
    ~Crap()
    {
        cout << "Crap destuchor!" << endl;
    }
};

void DeleteFishMemory(Fish* fish)
{
    delete fish;
}

int main()
{
    Fish fish;
    Tuna tuna;
    Crap crap;
    DeleteFishMemory(&fish);
    DeleteFishMemory(&tuna);
    DeleteFishMemory(&crap);
    return 0;
}