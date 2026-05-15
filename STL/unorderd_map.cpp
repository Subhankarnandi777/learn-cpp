#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map <string , int> m;

    m.emplace("tv", 100);
    m.emplace("laptop", 200);
    m.emplace("headphones", 50);
    m.emplace("tablets", 40);
    m.emplace("watch", 56);
    m.erase("watch");

    for (auto p : m){
        cout << p.first <<"  " <<  p.second << endl;
    }


    return 0;
}