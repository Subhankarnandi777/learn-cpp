#include <iostream>
#include<string>
using namespace std;

int main(){
    string str = "Subhankar Nandi"; // dynamic in nature => resize in runtime
    string str1 = "Subhankar";
    string str2 = "Nandi";
    string str3 = str1 + str2;
    cout << str3 << endl;
    cout << str1.length() << endl;
    string str4;
    getline(cin , str4);

    // for (int i = 0 ; i < str.length() ; i++){
    //     cout << str[i] << endl;
    // }

    for (char ch : str){
        cout << ch << endl; 
    }
    cout << "output :" << str4 << endl;

    return 0;
}