#ifndef _SIZEOFCLASS_H_
#define _SIZEOFCLASS_H_
#include<iostream>
#include<string.h>
using namespace std;

class Mystring
{
    private:
    char* buffer_;
    public:
    Mystring(const char* initbuffer);
    Mystring(const Mystring& copysource);
    ~Mystring(){delete[] buffer_;}
};

class Human
{
    private:
    string name_;
    int age_;
    public:
    Human(string name , int age):name_(name),age_(age){};
};

#endif