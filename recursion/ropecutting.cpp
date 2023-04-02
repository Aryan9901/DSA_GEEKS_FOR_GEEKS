#include <iostream>
using namespace std;

int maxim(int x, int y, int z)
{
    if (x > y && x > z)
        return x;
    else if (y > z)
        return y;
    else
        return z;
}

int RopeCutting(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res = maxim(RopeCutting(n - a, a, b, c), RopeCutting(n - b, a, b, c), RopeCutting(n - c, a, b, c));
    if (res == -1)
        return res;
    else
        return res + 1;
}

int main()
{
    cout << "enter the Rope Length: ";
    int n, a, b, c;
    cin >> n;
    cout << "enter the possible cut length: ";
    cin >> a >> b >> c;
    cout << "the maximum parts possible is: " << RopeCutting(n, a, b, c);
    return 0;
}