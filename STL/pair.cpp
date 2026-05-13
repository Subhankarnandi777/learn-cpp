#include <iostream>
#include <vector>
using namespace std;

int main(){

    pair<int, int> p1 = {1, 2};
    pair<string, int> p2 = {"Subhankar", 25};
    pair<int , pair<char, int>> p3 = { 1,{'a', 25}};


    vector<pair<int , int>> vec = {{1,2} , {2,3} , {3,4}};

    vec.push_back({4,5}); // insert
    vec.emplace_back(4,5); // in place objects are create

    for (auto p : vec){
        cout << p.first << " " << p.second << endl;
    }

    cout << p1.first << endl;
    cout << p1.second << endl;
    cout << p2.first << endl;
    cout << p2.second << endl;
    cout << p3.first << endl;
    cout << p3.second.first << endl;
    cout << p3.second.second << endl;


return 0;
}