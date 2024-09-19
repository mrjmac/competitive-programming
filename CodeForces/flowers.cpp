#include <bits/stdc++.h>

using namespace std;

long long mod = 1000000007;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t, k;
    cin >> t >> k;

    vector<long long> dp(10e5, 1);
    vector<long long> prefix(10e5, 1);

    for (int i  = k; i < 10e5; i++)
    {
        dp[i] = dp[i - 1] + dp[i - k];
        dp[i] %= mod;
    }

    prefix[0] = 1;

    for (int i = 1; i < 10e5; i++)
    {
        prefix[i] = prefix[i - 1] + dp[i];
        prefix[i] %= mod;
    }

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << (prefix[y] - prefix[x - 1] + mod) % mod << "\n";
    }
}