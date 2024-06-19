#include <queue>
#include <vector>

int main()
{
    using namespace std;

    queue<int> intque;

    queue<double> douque;

    queue<double, vector<double>> vecdouque;

    queue<int> intquecp(intque);

    return 0;
}