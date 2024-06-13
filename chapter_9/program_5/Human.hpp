#ifndef _HUMAN_H_
#define _HUMAN_H_
#include<string>
#include<iostream>
using namespace std;

class Human
{
    private:
        string name_;
        int age_;
    public:
        Human();
        Human(string name,int age):name_(name),age_(age){}
        void NameSet(string name);
        void AgeSet(int age);
        void IntroduceSelf();
};
#endif