#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        int ans = 0;
        long long reduced = max(a, b) / min(a, b);

        while (reduced >= 2 && reduced % 2 == 0)
        {
            reduced /= 2;
            ans++;
        }

        if (reduced == 1 && max(a, b) % min(a, b) == 0)
        {
            cout << (ans + 2) / 3 << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}