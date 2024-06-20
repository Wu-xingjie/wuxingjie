#include <queue>
#include <functional>

int main()
{
    using namespace std;

    priority_queue<int> intpque;

    priority_queue<double> doupque;

    priority_queue<double, deque<double>, greater<int>>;

    priority_queue<int> cpintpque(intpque);

    return 0;
}