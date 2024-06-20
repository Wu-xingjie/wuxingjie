#ifndef _HUMAN_H_
#define _HUMAN_H_
#include<iostream>
#include<string.h>
using namespace std;

class Human
{
    private:
    string name_;
    int age_;
    
    public:
    Human(string name , int age):name_(name),age_(age){}
    friend void show(const Human& hm);
};

#endif