
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    else if (p1.second > p2.second)
        return false;
    else if (p1.first < p2.first)
        return true;
    else
        return false;
}

int main()
{

    // int arr[5] = {1, 5, 6, 7, 8};
    vector<int> vec = {3, 5, 6, 4, 8};
    reverse(vec.begin() + 1, vec.begin() + 3);

    // vector <pair<int , int>> vec = {{3,1}, {2,1}, {4,2}, {6,5}};
    // sort(vec.begin(), vec.end());
    // sort(vec.begin(), vec.end() , comparator);
    // sort(vec.begin(), vec.end(), greater<int>());

    // for (auto p : vec){
    //     cout << "(" << p.first << ", " << p.second << ") ";
    // }
    // cout << endl;

    // sort(arr, arr + 5);

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}