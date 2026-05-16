#include <iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    set <int> s;
    unordered_set <int> s1;

    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(50);

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    cout << " lower bound = " << *(s.lower_bound(4)) << endl;
    cout << "upper bound = " << *(s.upper_bound(4)) << endl;

    for(auto val : s1){
        cout << val << " ";
    }
    return 0;
}