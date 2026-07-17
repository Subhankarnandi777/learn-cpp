#include <iostream>
#include <string>
using namespace std;

int isPalindrome(string s)
{
    int st = 0;
    int end = s.size() - 1;

    while (st < end)
    {
        if (s[st] != s[end])
         return false;

        st++;
        end--;
    }
    return true;
}
int main()
{
    string s;
    cout << "Enter the string :";
    cin >> s;

    if (isPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}