#include <iostream>
using namespace std;

void printDigits(int n){
    while(n!= 0){
        int digit = n % 10;
        cout << digit << endl;
        n /= 10;
    }
}

int main(){
    int n = 3568;
    printDigits(n);
    cout << (int)(log10(n) + 1) << endl; // shortcut of digits
    return 0;
}
