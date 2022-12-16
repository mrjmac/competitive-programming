#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, w;
    cin >> n >> w;

    vector<pair<int, int>> gems(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;

        gems[i] = make_pair(a, b);
    }

    int dp[n + 1][w + 1];

    for (int i = 0; i <= w; i++)
    {
        dp[i][0] = 0;
        dp[0][i] = 0;
    }


    for (int rock = 1; rock <= n; rock++)
    {
        for (int weight = 1; weight <= w; weight++)
        {
            int no = dp[rock - 1][weight];
            int yes = 0;

            if (weight - gems[rock].second >= 0)
            {
                yes = gems[rock].first + dp[rock - 1][weight - gems[rock].second];
            }

            dp[rock][weight] = max(yes, no);
        }
    }

    cout << dp[n][w] << "\n";
}