#include <iostream>
#include<queue>
using namespace std;

int main(){

    queue <int> q1;

    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);

    queue <int> q2;

    q2.swap(q1);

    cout << " q1 size :" << q1.size() << endl;
    cout << " q2 size :" << q2.size() << endl;


    while(!q1.empty()){
        cout << q1.front() << endl;
        q1.pop();
    }
    return 0;
}