#include <iostream>
using namespace std;

int main(){
    bool isPrime = true;
    int n = 10;
    for (int i = 2; i < n; i++){
        isPrime = false;
        break;
    }
    if (isPrime == true){
        cout << "The number is prime" << endl;
    } else {
        cout << "The number is not prime" << endl;
    }
    
    return 0;
}