#include"Human.hpp"

Human::Human()
{
    age_ = 0;
    name_ = "null";
}

Human::Human(string name,int age)
{
    name_ = name;
    age_ = age;
}

void Human::AgeSet(int age)
{
    age_ = age;
}

void Human::NameSet(string name)
{
    name_ = name;
}

void Human::IntroduceSelf()
{
    cout << "my name is " << name_ << "!"<<endl;
    cout << "i'm " << age_ << "years old!" << endl;
}