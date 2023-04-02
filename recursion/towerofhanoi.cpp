#include <iostream>
using namespace std;

void towerOfHanoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << "Move Disk 1 from " << a << " to " << c << endl;
        return;
    }
    towerOfHanoi(n - 1, a, c, b);
    cout << "Move Disk " << n << " from " << a << " to " << c << endl;
    towerOfHanoi(n - 1, b, a, c);
}

int main()
{
    int n;
    char a, b, c;
    cout << "Enter the no of disks: ";
    cin >> n;
    cout << "Enter the tower name: " << endl;
    cin >> a >> b >> c;
    towerOfHanoi(n, a, b, c);
    return 0;
}