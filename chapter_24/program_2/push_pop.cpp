#include <stack>
#include <iostream>

int main()
{
    using namespace std;

    stack<int> intsta;

    for(int i = 0; i < 5 ; i++)
    {
        intsta.push(i);
        cout << intsta.top() << endl;
    }

    while(!intsta.empty())
    {
        cout << "poping topmat element: " << intsta.top() << endl;
        intsta.pop();
    }



    return 0;
}