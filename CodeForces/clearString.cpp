#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> dp(501, vector<int> (501));
string s;

int ans(int l, int r)
{
    if (l > r)
    {
        return 0;
    }
    
    if (l == r)
    {
        return 1;
    }

    if (dp[l][r] != -1)
    {
        return dp[l][r];
    }

    int curr = 1 + ans(l + 1, r);

    for (int i = l + 1; i <= r; i++)
    {
        if (s[l] == s[i])
        {
            curr = min(curr, ans(l + 1, i - 1) + ans(i, r));
        }
    }

    dp[l][r] = curr;

    return dp[l][r];
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n >> s;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << ans(0, n - 1) << "\n";
}