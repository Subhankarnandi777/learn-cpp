#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){


    int n = 15;
    long int n1 = 15 ; 
    long long int n2 = 13;
    cout << __builtin_popcount(n) << endl;
    cout << __builtin_popcountl(n1) << endl;
    cout << __builtin_popcountll(n2) << endl;
    // vector<int> vec = {3, 5, 6, 4, 8};
    // cout << binary_search(vec.begin() , vec.end(), 3) << endl;


    // cout << *(max_element(vec.begin() , vec.end()));
    // cout << endl;
    // cout << *(min_element(vec.begin() , vec.end()));


    // string s = " subhnakar";

    // next_permutation(s.begin (), s.end());
    // prev_permutation(s.begin() , s.end());

    // int a = 100;
    // int b = 300;
    // swap(a, b);
    // cout << " a = " << a << " " << " b = " << b << endl;

    // cout << max(4,5) << " " << min(101 , 6) << endl;
    // cout << s << endl;
    return 0;
}