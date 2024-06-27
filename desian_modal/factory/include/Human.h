#pragma once

#include <string>

class Human
{
    public:
        virtual Human* Speak() = 0;  

    private:
        std::string _name;
        int _age;
};