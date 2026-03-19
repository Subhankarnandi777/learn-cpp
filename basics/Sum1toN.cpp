#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum of numbers from 1 to n is:" << sum;
    return 0;
}