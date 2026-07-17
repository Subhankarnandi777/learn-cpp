#include <iostream>
#include<cstring>
using namespace std;

int main(){
    // char str[12];
    // cout << "Enter char array:" << endl;
    // cin.getline(str,12,'$'); // to get the input in charecter array

    // for(char ch : str){
    //     cout << ch << " ";
    // }
    // cout << endl;

    char str[] = "Subhankar Nandi";
    int len = 0;
    for (int i = 0 ; str[i] != '\0'; i++){
        len++;
    }
    cout << "Length of string :" << len << endl;


    // char str1[] = {'a','b','c','\0'};
    // char str2[] = "abc";


    // cout << strlen(str1) << endl;

    return 0;
}