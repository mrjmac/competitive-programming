#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    vector<pair<char, int>> cards(n);

    for (int i = 0; i < n; i++)
    {
        char t;
        int curr;

        cin >> t >> curr;

        cards[i] = make_pair(t, curr);
    }

    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
    dp[0][0] = 0;

    for (int i = 0; i < n; i++)
    {
        char currType = cards[i].first;
        int currValue = cards[i].second;

        for (int l = i + 1; l >= 1; l--)
        {
            for (int m = k; m >= 0; m--)
            {
                if (currType == 'a')
                {
                    dp[l][m] = max(dp[l][m], dp[l - 1][m] + currValue);
                }
                else if (m > 0)
                {
                    dp[l][m] = max(dp[l][m], dp[l - 1][m - 1] * currValue);
                }
                else if (l != 1)
                {
                    dp[l][m] = dp[l - 1][m];
                }
            }
        }
    }

    vector<int> ans(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        for (int m = 0; m <= k; m++)
        {
            ans[i] = max(ans[i], dp[i][m]);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << "\n";
    }
}