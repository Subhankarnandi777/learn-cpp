#include <iostream>
#include<map>
using namespace std;

int main(){
    multimap <string , int> m;

    m.insert({"tv", 100});
    m.insert({"laptop", 200});
    m.insert({"headphones", 50});
    m.insert({"tablets", 40});
    m.insert({"watch", 56});

    m.erase("watch");

    m.insert({"camera" , 25});
    m.emplace ("charger" , 20);

    for (auto p : m){
        cout << p.first <<"  " <<  p.second << endl;
    }

    if (m.find("camera")!= m.end()){
        cout << " found" << endl;
    } else {
        cout << "not found" << endl;
    }
    
    cout << "Count = " << m.count("laptop") << endl;
    return 0;
}