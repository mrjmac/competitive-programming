#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, big = 0;
    cin >> n;

    vector<int> temp(n, 0);
    vector<long long> count(100005, 0);
    vector<long long> dp(100005, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];

        count[temp[i]]++;
        big = max(big, temp[i]);
    }

    dp[0] = 0;
    dp[1] = count[1];

    for (int i = 2; i <= big; i++)
    {
        dp[i] = max(dp[i - 1], i * count[i] + dp[i - 2]);
    }

    cout << dp[big] << "\n";
}