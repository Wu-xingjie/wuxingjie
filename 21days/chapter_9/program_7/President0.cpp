#include"President.hpp"

int main()
{
    President& onlypresident = President::GetInstance();
    onlypresident.SetName("tom");
    cout << "president's name is " << onlypresident.GetName() << endl;
    
    President& onlypresident1 = onlypresident;
    cout << "president1's name is " << onlypresident1.GetName() << endl;
    return 0;
}