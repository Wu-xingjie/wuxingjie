#include "Factory.h"
#include "Teacher.h"

class TeacherFactory : public Factory
{
    public:
        Teacher* Create(std::string teacher_id, std::string name, int age);
};