#pragma once

#include "Human.h"

class Teacher : public Human
{
    public:
        Teacher(std::string teacher_id, std::string name, int age)
        : Human(teacher_id, age), _teacher_id(teacher_id){}
        void Speak(std::string words);
        void Teach();
    
    private:
        std::string _teacher_id;
};