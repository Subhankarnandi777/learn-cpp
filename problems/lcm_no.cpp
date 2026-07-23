#include <iostream>
using namespace std;

int gcdRec ( int a , int b){
    if ( b == 0) return a;
    return gcdRec(b , a % b);
}

int lcm (int a , int b){
    int gcd = gcdRec(a,b);
    return (a*b)/ gcdRec(a,b);
}
int main(){
    cout << gcdRec(20,24) << endl;
    cout << lcm(20,28) << endl;
    return 0;
}