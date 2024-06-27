#include "../include/TeacherFactory.h"
#include "../include/Teacher.h"

Teacher* TeacherFactory::Create(std::string teacher_id, std::string name, int age)
{
    return (new Teacher(teacher_id, name, age));
}