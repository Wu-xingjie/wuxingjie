#include<iostream>
using namespace std;

class Animal
{
    private:
    int age_;
    public:
    Animal()
    {
        cout << "Animal constructor!" << endl;
    }
};

class Bird : public virtual Animal{};

class Mammal : public virtual Animal{};

class Reptile : public virtual Animal{};

class Platypus : public Bird , public Mammal , public Reptile
{
    public:
    Platypus()
    {
        cout << "platypus constructor!" << endl;
    }
};

int main()
{
    Platypus py;
    return 0;
}