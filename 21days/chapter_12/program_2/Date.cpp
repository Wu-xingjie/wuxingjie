#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class Date
{
    private:
    int day_ , month_ , year_;
    string dateInString;

    public:
    Date(int day , int month , int year) : day_(day),month_(month),year_(year){}

    operator const char*()
    {
        ostringstream formattedDate;
        formattedDate << month_ << "/" << day_ << "/" << year_ << endl;
        dateInString = formattedDate.str();
        return dateInString.c_str();
    }
};

int main()
{
    Date Holiday(12,25,2021);
    cout << Holiday << endl;
    return 0;
}