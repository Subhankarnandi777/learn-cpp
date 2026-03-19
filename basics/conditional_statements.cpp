#include <iostream>
#include <string>
using namespace std;

int main(){

    string teaorder;
    cout << "Enter your tea Order";
    getline(cin , teaorder);

    if (teaorder == "Green Tea"){
        cout << "You have Ordered Green Tea" << endl;
    }
    
    return 0;
}