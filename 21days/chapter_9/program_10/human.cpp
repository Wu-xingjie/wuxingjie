#include"human.hpp"

void show(const Human& hm)
{
    cout << "name: " << hm.name_ <<endl;
    cout << "age: " << hm.age_ << endl;
}

int main()
{
    Human wxj("wuxingjie",27);
    show(wxj);

    return 0;
}