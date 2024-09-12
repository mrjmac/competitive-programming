#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<long long> dp(n + 1, 0);

    dp[0] = 1;
    long long curr = dp[0];

    for (int i = 1; i <= n; i++)
    {
        dp[i] = curr;

        if (i >= m)
        {
            curr -= dp[i - m];
        }

        curr += dp[i];
        curr %= 998244353;
    }

    cout << dp[n] << "\n";
    
}