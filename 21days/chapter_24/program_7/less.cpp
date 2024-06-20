#include <queue>
#include <iostream>

int main()
{
    using namespace std;

    priority_queue<int, vector<int>, greater<int>> intpque;
    int element[5]={1,5,63,2,8};
    for(int i = 0; i < sizeof(element) / sizeof(element[0]); i++)
    {
        intpque.push(element[i]);
    }

    while(!intpque.empty())
    {
        cout <<"delete element: " << intpque.top() << endl;
        intpque.pop();
    }

    return 0;
}