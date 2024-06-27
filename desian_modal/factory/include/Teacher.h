#pragma once

#include "Human.h"

class Teacher : public Human
{
    public:

        Human* Speak();
        void Teach();
    
    private:
        std::string _teacher_id;
};