#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string &str, int start, int end)
{
    if (start >= end)
        return true;
    return ((str[start] == str[end]) && isPalindrome(str, start + 1, end - 1));
}

int main()
{
    string str;
    cout << "enter the string: ";
    cin >> str;
    int n = str.length();
    if (isPalindrome(str, 0, n - 1))
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome!" << endl;
    _getwche();
    return 0;
}