#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n > 30)
        {
            n -= 30;
            cout << "YES\n";

            if (n == 6 || n == 10 || n == 14)
            {
                cout << 6 << " " << 10 << " " << 15 << " " << n - 1 << "\n";
            }
            else
            {
                cout << 6 << " " << 10 << " " << 14 << " " << n << "\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
}