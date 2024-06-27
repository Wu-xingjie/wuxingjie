#pragma once

#include <string>

class Human
{
    public:
        Human(std::string name, int age)
         : _name(name), _age(age){}
        virtual void Speak();  

    private:
        std::string _name;
        int _age;
};