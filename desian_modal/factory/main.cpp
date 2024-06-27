#include "./include/Teacher.h"

#include "./include/TeacherFactory.h"

int main()
{
    TeacherFactory teacher0;
    auto wxj = teacher0.Create("12345", "wxj", 27);
    wxj->Speak("abc");
    wxj->Teach();

    return 0;
}