#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        long long hands[n][m];

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                cin >> hands[j][k];
            }
        }

        long long ans = 0;

        for (int j = 0; j < m; j++)
        {
            vector<long long> sorted;
            long long sum = 0;
            for (int k = 0; k < n; k++)
            {
                sorted.push_back(hands[k][j]);
                sum += hands[k][j];
            }

            long long temp = 0;
            sort(sorted.begin(), sorted.end());

            for (int k = 0; k < n; k++)
            {
                temp += sorted[k];
                ans += abs((sum - temp) - (n - 1 - k) * sorted[k]);
            }
        }

        cout << ans << "\n";

    }
}