#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

template<typename T>
struct DisplayElementKeepcount
{
    int count_;
    DisplayElementKeepcount():count_(0){}

    void operator() (const T& elem)
    {
        ++count_;
        cout << elem << " ";
    }    
};

int main()
{
    vector<int> intvec{1,2,5,74,8,15,120};
    DisplayElementKeepcount<int> functor = for_each(intvec.begin(),
                                                    intvec.end(),
                                                    DisplayElementKeepcount<int>());
    cout << endl;
    cout << "there are " << functor.count_ << " elements were displayed" << endl;    
    
    string str("for_each and string");
    
    int num = 0;
    auto functor1 = for_each(str.cbegin(),
                            str.cend(),
                            [&num](char c)
                            {
                                cout << c << " ";
                                num++;
                            });
    cout << endl;

    cout << "there are " << num << " charactors in str!";
    cout << endl;
    return 0;
}