#include <queue>
#include <iostream>

int main()
{
    using namespace std;

    queue<int> intque;

    for(int i = 0; i < 5 ; i++)
    {
        intque.push(i);
        cout << intque.back() << endl;
    }

    while(!intque.empty())
    {
        cout << "poping topmat element: " << intque.front() << endl;
        intque.pop();
    }



    return 0;
}