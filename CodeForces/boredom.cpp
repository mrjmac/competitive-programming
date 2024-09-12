#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> temp(n, 0);

    int big;
    cin >> big;

    temp[0] = big;

    for (int i = 1; i < n; i++)
    {
        cin >> temp[i];

        big = max (temp[i], big);
    }

    vector<int> freq(max(big + 1, n + 1), 0);

    for (int i = 0; i < n; i++)
    {
        freq[temp[i]]++;
    }

    vector<long long> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = freq[1];

    for (int i = 2; i <= n; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + (1ll * freq[i] * i));
    }

    cout << dp[n] << "\n";
}