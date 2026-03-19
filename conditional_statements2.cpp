#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cups;
    double pricepercup = 2.5, totalprice, discount;

    cout << "Enter the number of tea cups:";
    cin >> cups;

    totalprice = pricepercup * cups;

    if (cups > 20){
        discount = 0.20;
    }else if (cups >= 10 && cups <= 20){
        discount = 0.10;
    }else{
        discount = 0;
    }
    // totalprice = totalprice - (totalprice * discount);

    totalprice -= (totalprice * discount);

    cout << "total price after discount is: " << totalprice << endl;
    return 0;
}