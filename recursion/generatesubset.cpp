#include <iostream>
#include <string>
using namespace std;

void generateSubset(string str, int i = 0, string curr = "")
{
    if (i == str.length())
    {
        cout << curr << " ";
        return;
    }
    generateSubset(str, i + 1, curr);
    generateSubset(str, i + 1, curr + str[i]);
}

int main()
{
    string str;
    cout << "enter the string: ";
    cin >> str;
    generateSubset(str, 0, "");
    return 0;
}