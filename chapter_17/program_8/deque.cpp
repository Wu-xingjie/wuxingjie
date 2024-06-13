#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main()
{
    vector<int> intvector{1,2,3,4,5,6,7,8,9};
    deque<int>  intdeque{11,22,33,44,55,66,77,88,99};

    intvector.push_back(10);
    intvector.push_back(11);
    intvector.pop_back();

    for(int i =0;i< intvector.size();i++)
    {
        cout << "intvector[" << i << "] =" << intvector[i] << endl;
    }
    
    cout << endl;

    intdeque.push_back(100);
    intdeque.push_back(111);
    intdeque.pop_back();
    intdeque.push_front(00);
    intdeque.push_front(111);
    intdeque.pop_front();
    for(int i =0;i< intdeque.size();i++)
    {
        cout << "intdeque[" << i << "] =" << intdeque[i] << endl;
    }

    
    return 0;
}