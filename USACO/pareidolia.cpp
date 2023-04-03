#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    string s;
    long long ans = 0;
    cin >> s;

    long long dp[7] = {0};
    long curr = s.length();

    for (char l : s)
    {
        dp[0] += 1;
        for (int d = 5; d >= 0; d--)
        {
            if (l == "bessie"[d])
            {
                dp[d + 1] += dp[d];
                dp[d] = 0;
            }
        }

        ans += dp[6] * curr;
        dp[0] += dp[6];
        dp[6] = 0;
        curr--;
    }

    cout << ans << "\n";

}