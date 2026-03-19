#include <iostream>
#include<string>
using namespace std;

int main(){
    string UserTea;
    int teaQuantity;
    cout << "What would you like to order in tea? \n";
    getline(cin,UserTea);

    cout << "How many Cups of" << UserTea << "Would you like to have ?";
    cin >> teaQuantity;

    cout << teaQuantity;
    cout << UserTea;

    return 0;
}