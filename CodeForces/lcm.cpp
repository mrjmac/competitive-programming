#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        if (2 * l <= r)
        {
            cout << l << " " << 2 * l << "\n";
        }
        else
        {
            cout << "-1 -1\n";
        }
    }
}