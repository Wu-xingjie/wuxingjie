#include<iostream>
using namespace std;

union simpleunion
{
    int num;
    char alphabet;
};

struct complextype
{
    enum datetype
    {
        INT,
        CHAR
    }type;

    union Value
    {
        int num;
        char alphabeta;

        Value(){}
        ~Value(){}
    }value;
};

void displaycomplextype(const complextype& obj)
{
    switch (obj.type)
    {
    case complextype::INT:
        cout<<"Union contains number:"<<obj.value.num<<endl;
        break;
    
    case complextype::CHAR:
        cout<<"union contains character:"<<obj.value.alphabeta<<endl;
        break;
    }
}

int main()
{
    simpleunion u1,u2;
    
    u1.num=12;
    u1.alphabet='a';

    u2.num=34;
    u2.alphabet='t';

    cout<<"sizeof(u1)="<<sizeof(u1)<<endl;
    cout<<"sizeof(u2)="<<sizeof(u2)<<endl;

    complextype mydate1,mydate2;
    
    mydate1.type=complextype::INT;
    mydate1.value.num=23;

    mydate2.type=complextype::CHAR;
    mydate2.value.alphabeta='S';

    displaycomplextype(mydate1);
    displaycomplextype(mydate2);

    return 0;
}