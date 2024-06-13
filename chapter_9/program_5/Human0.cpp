#include"Human.hpp"

int main()
{
    Human firstman;
    firstman.AgeSet(12);
    firstman.NameSet("tom");
    firstman.IntroduceSelf();

    Human secondman("mike",14);
    secondman.IntroduceSelf();
    
    return 0;
}