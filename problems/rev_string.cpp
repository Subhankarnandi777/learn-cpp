// using charecter array

// #include <iostream>
// using namespace std;

// int main(){
//     string str = "Subhankar Nandi";
//     int st = 0 , end = str.size() - 1;

//     while (st < end){
//         swap(str[st], str[end]);
//         st++;
//         end--;
//     }
//     cout << str << endl;
//     return 0;
// }

// using string :

#include <iostream>
#include <algorithm>  // Needed for reverse
using namespace std;

int main() {
    string str = " Subhankar Nandi";
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}
