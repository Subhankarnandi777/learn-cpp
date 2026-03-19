#include <iostream>
#include <string>
using namespace std;

int main(){
    int hour;

    cout << "Enter the current Hour (0-23):";
    cin >> hour;

    if (hour >= 8 && hour <= 18){
        cout << "Tea Shop is open" << endl;
    }else{
        cout << "Tea Shop is closed" << endl;
    }
    
    

    return 0;
}