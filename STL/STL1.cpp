#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.pop_back();
    vec.emplace_back(50);


    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    cout << vec.size() << " " << endl;
    cout << vec.capacity() << endl;

    cout << "val at index 2 " << vec[2] << " or " << vec.at(2) << endl;
    cout << "front element of the vector" << vec.front() << endl;
    cout << "last element of the vector" << vec.back() << endl;
    return 0;
}