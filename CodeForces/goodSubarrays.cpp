#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;
    
    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;

        vector<int> prefix(n + 1);

        for (int i = 1; i <= n; i++)
        {
            char c;
            cin >> c;

            prefix[i] = c - '0';
        }

        for (int i = 1; i <= n; i++)
        {
            prefix[i] += prefix[i - 1];
        }

        map<int, long long> distance;

        for (int i = 0; i <= n; i++)
        {
            distance[prefix[i] - i]++;
        }

        long long ans = 0;
        for (auto x : distance)
        {
            ans += x.second * (x.second - 1) / 2;
        }

        cout << ans << "\n";
    }
}