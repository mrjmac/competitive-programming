#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long y, x;
        cin >> y >> x;

        if (x == 1 && y == 1)
        {
            cout << 1 << "\n";
        }
        else if (x > y)
        {
            if (x % 2 != 0)
            {
                cout << (x * x) - y + 1 << "\n";
            }
            else
            {
                cout << ((x - 1) * (x - 1)) + 1 - 1 + y << "\n";
            }
        }
        else
        {
            if (y % 2 == 0)
            {
                cout << (y * y) - x + 1 << "\n";
            }
            else
            {
                cout << ((y - 1) * (y - 1)) + 1 - 1 + x << "\n";
            }
        }
    }
}