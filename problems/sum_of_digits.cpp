#include <iostream>
using namespace std;


void printdigits(int n){
    int sum = 0;
    while(n != 0){
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    cout << "Sum of Digits:"<< sum << endl;
}
int main(){
    int n = 3568;
    printdigits(n);
    return 0;
}