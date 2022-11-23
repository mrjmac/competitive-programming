#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);

    int n, ans = 0;
    cin >> n;

    vector<int> cows(n), real(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cows[i];
        real[i] = cows[i];
    }

    sort(real.begin(), real.end());

    for (int i = 0; i < n; i++)
    {
        if (cows[i] != real[i])
        {
            ans += 1;
        }
    }

    cout << ans - 1 << "\n";
    
}