#ifndef _PRESIDENT_H_
#define _PRESIDENT_H_
#include<string.h>
#include<iostream>
using namespace std;

class President
{
    private:
    string name_;    
    President(){};  //default constructor
    President(const President&);   //copy constructor; but the object can't be copy
    const President& operator=( const President&); //assignment operator

    public:
    static President& GetInstance()
    {
        static President onlypresident;
        return onlypresident;
    }
    string GetName(){return name_;}
    void SetName(string name){name_=name;}
};

#endif