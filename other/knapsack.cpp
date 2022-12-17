#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long long n, w;
    cin >> n >> w;

    vector<pair<long long, long long>> gems(n + 1);

    for (long long i = 1; i <= n; i++)
    {
        long long a, b;
        cin >> a >> b;

        gems[i] = make_pair(a, b);
    }

    long long dp[n + 1][w + 1];

    for (long long i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }

    for (long long i = 0; i <= w; i++)
    {
        dp[0][i] = 0;
    }


    for (long long rock = 1; rock <= n; rock++)
    {
        for (long long weight = 1; weight <= w; weight++)
        {
            long long no = dp[rock - 1][weight];
            long long yes = 0;

            if (weight - gems[rock].first >= 0)
            {
                yes = gems[rock].second + dp[rock - 1][weight - gems[rock].first];
            }

            dp[rock][weight] = max(yes, no);
        }
    }
    

    cout << dp[n][w] << "\n";
}