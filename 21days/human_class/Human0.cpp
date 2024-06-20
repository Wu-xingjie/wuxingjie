#include"Human.hpp"

int main()
{
    Human firstMan;
    firstMan.name_="Adam";
    firstMan.age_=30;
    firstMan.IntroduceSelf();

    Human* firstWoman=new Human;
    firstWoman->name_="Eva";
    firstWoman->age_=28;
    firstWoman->IntroduceSelf();
    return 0;
}