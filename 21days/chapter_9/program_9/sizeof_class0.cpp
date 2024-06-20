#include"sizeof_class.hpp"

int main()
{
    Mystring mansname("adam");
    Mystring womansname("jane");

    cout << "sizeof(Mystring) = " << sizeof(Mystring) << endl;
    cout << "sizeof(mansname) = " << sizeof(mansname) << endl;
    cout << "sizeof(womansname) = " << sizeof(womansname) << endl;

    Human firsthuman("jame",12);
    Human secondhuman("tom",32);
    
    cout << "sizeof(Human) = " << sizeof(Human) << endl;
    cout << "sizeof(firsthuman) = " << sizeof(firsthuman) << endl;
    cout << "sizeof(secondhuman) = " << sizeof(secondhuman) << endl;
    


}