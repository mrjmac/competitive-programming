#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> dp(n + 2, 0);

        for (int i = 1; i <= min(n, k); i++)
        {
            cin >> dp[i];
        }
        
        for (int i = k + 1; i <= n; i++)
        {
            int curr;
            cin >> curr;

            int low = dp[i - 1];

            for (int j = i - 1; j >= i - k; j--)
            {
                if (j > 0)
                {
                    low = min(low, dp[j]);
                }
            }

            dp[i] = max(curr, low);
        }

        int ans = dp[n];

        for (int i = n; i > n - k; i--)
        {
            if (i > 0)
            {
                ans = min(ans, dp[i]);
            }
        }

        if (n < k)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }
}