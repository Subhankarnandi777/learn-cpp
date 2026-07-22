#include <iostream>
using namespace std;


bool isArmstromg (int n){
    int copyN = n;
    int sumOfCubes = 0;

    while(n != 0){
        int dig = n % 10;
        sumOfCubes += (dig * dig * dig);
        n = n / 10;
    }
    return sumOfCubes == copyN;
}
int main(){
    int n = 153;
    if(isArmstromg(n)){
        cout << "Armstrong No";
    } else {
        cout << "not a Armstrong No";
    }
    return 0;
}