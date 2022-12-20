#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> h(n + 1);
    vector<int> p(n + 1);
    vector<int> s(n + 1);

    for (int i = 1; i <= n; i++)
    {
        h[i] = h[i - 1];
        p[i] = p[i - 1];
        s[i] = s[i - 1];

        char curr;
        cin >> curr;

        if (curr == 'H')
        {
            h[i] += 1;
        }
        else if (curr == 'P')
        {
            p[i] += 1;
        }
        else
        {
            s[i] += 1;
        }
    }

    int ans = 0;

    for (int i = 1; i < n; i++)
    {
        int currMax = max({h[i], s[i], p[i]});
        int remMax = max({h[n] - h[i], s[n] - s[i], p[n] - p[i]});

        ans = max(ans, currMax + remMax);
    }

    cout << ans << "\n";
    
}