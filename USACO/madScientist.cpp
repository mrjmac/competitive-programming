#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);

    int n, ans = 0;
    string a, b;
    bool streak = false;

    cin >> n >> a >> b;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (!streak)
            {
                ans += 1;
                streak = true;
            }
        }
        else
        {
            streak = false;
        }
    }

    cout << ans << "\n";
}