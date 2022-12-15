#include <bits/stdc++.h>

using namespace std;

int coinChange(vector<int>& coins, int amount) {
        
        int dp[amount + 1];
        dp[0] = 0;

        for (int i = 1; i <= amount; i++)
        {
            int best = 10e5;
            for (int c : coins)
            {
                if (i - c >= 0)
                {
                    int total = 1 + dp[i - c];
                    if (total < best)
                    {
                        best = total;
                    }
                }
            }
            dp[i] = best;
        }

        return dp[amount];
    }

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    vector<int> a{1, 2, 5};
    cout << coinChange(a, 11) << "\n";
}