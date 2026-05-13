#include <iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);

    stack <int> s2;

    s2.swap(s1);
    
    cout << "s size :" << s1.size() << endl;
    // cout << "top :" << s.top() << endl;

    while (!s1.empty ()){
        cout << s1.top() << endl;
        s1.pop();
    }

    return 0;
}