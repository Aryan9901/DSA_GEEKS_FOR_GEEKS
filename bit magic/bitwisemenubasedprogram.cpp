#include <iostream>
using namespace std;

// check kth bit is set or not;
void checkkthbit(int n, int k)
{
    if ((n & (1 << (k - 1))) != 0)
        cout << k << "th bit is set." << endl;
    else
        cout << k << "th bit is not set!" << endl;
}
// count total set bits
// Brian kerningham algorithm
int countSetBit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
// power of two
// Idea: if a number is power of two then it will have only one set bit
bool powerOfTwo(int n)
{
    return n != 0 && (n & (n - 1) == 0);
}

int main()
{
    char ch, con;
    cout << "********************Bit Magic*********************" << endl;
    while (1)
    {
        int n, k;
        cout << "********************Bit Magic*********************" << endl;
        // option:
        cout << "you can perform the following operation:" << endl;
        cout << "e). Enter 'e' to Exit the program." << endl;
        cout << "a). check kth bit is set or not." << endl;
        cout << "b). count total set bits." << endl;
        cout << "c). check weather a number is power of 2 or not." << endl;
        cout << "Enter your choice: ";
        ch = getchar();
        switch (ch)
        {
        case 'a':
            cout << "Enter the number: ";
            cin >> n;
            cout << "Enter the location: ";
            cin >> k;
            checkkthbit(n, k);
            break;
        case 'b':
            cout << "Enter the number: ";
            cin >> n;
            cout << "there are total " << countSetBit(n) << " set bit in " << n << endl;
            break;
        case 'c':
            cout << "Enter the number: ";
            cin >> n;
            if (powerOfTwo(n))
                cout << n << " is a power of two." << endl;
            else
                cout << n << " is not a power of two!" << endl;
            break;
        case 'e':
            cout << "thanx for using our program. visit again(:" << endl;
            cout << "program exits with exit code 0." << endl;
            exit(0);
            break;
        default:
            cout << "some error occured):!.Maybe you have entered some wront value.Please entered it again.";
            cout << "uou have the following option to perfom:" << endl;
            // goto option;
        }
        cout << "Do you want to continue?(Y/y/N/n): ";
        cin >> con;
        if (con == 'Y' || con == 'y')
        {
            cout << "You may proceed:(:" << endl;
        }
        else
        {
            cout << "thanx for using our program. visit again(:" << endl;
            cout << "program exits with exit code 0." << endl;
            exit(0);
        }
    }

    return 0;
}