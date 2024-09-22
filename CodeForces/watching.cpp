#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, p, q;
    cin >> n >> p >> q;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    if (p + q >= n)
    {
        cout << 1 << "\n";
    }
    else
    {
        int l = 0, r = a[n - 1];

        while (l + 1 < r)
        {
            int dp[n][p + 1];

            int w = (l + r) / 2; 
            int small = 0, big = 0;

            for (int i = 0; i < n; i++)
            {
                while (a[i] - a[small] >= w)
                {
                    small++;
                }

                while (a[i] - a[big] >= 2 * w)
                {
                    big++;
                }

                for (int j = 0; j <= p; j++)
                {
                    if (j != 0)
                    {
                        if (small == 0)
                        {
                            dp[i][j] = 0;
                        }
                        else if (big == 0)
                        {
                            dp[i][j] = min(dp[small - 1][j - 1], 1);
                        }
                        else
                        {
                            dp[i][j] = min(dp[small - 1][j - 1], dp[big - 1][j] + 1);
                        }
                    }
                    else
                    {
                        if (big == 0)
                        {
                            dp[i][j] = 1;
                        }
                        else
                        {
                            dp[i][j] = dp[big - 1][j] + 1;
                        }
                    }
                }
            }

            int low = dp[n - 1][0];
            for (int i = 1; i <= p; i++)
            {
                low = min(low, dp[n - 1][i]);
            }

            if (low > q)
            {
                l = w;
            }
            else
            {
                r = w;
            }
        }

        cout << r << "\n";
    }
}