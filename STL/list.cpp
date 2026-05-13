#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_front(40);
    l.push_front(50);

    l.pop_back();
    l.pop_front();

    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}