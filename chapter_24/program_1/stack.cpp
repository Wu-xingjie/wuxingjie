#include <stack>
#include <vector>

int main()
{
    using namespace std;

    stack<int> intstack;

    stack<double> doublestack;

    stack<double, vector<double>> doublevecstack;

    stack<int> intstack1(intstack);

    return 0;
}