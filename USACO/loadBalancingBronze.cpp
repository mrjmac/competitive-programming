#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);

    int n, b;
    cin >> n >> b;

    int ans = n;
    vector<pair<int, int>> cows(n);
    vector<pair<int, int>> fences(n);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        cows[i] = make_pair(x, y);
        fences[i] = make_pair(x + 1, y + 1);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int tl = 0, tr = 0l, br = 0, bl = 0;

            for (int k = 0; k < n; k++)
            {
                if (cows[k].first < fences[i].first && cows[k].second > fences[j].second)
                {
                    tl++;
                }
                else if (cows[k].first > fences[i].first && cows[k].second > fences[j].second)
                {
                    tr++;
                }
                else if (cows[k].first < fences[i].first && cows[k].second < fences[j].second)
                {
                    bl++;
                }
                else if (cows[k].first > fences[i].first && cows[k].second < fences[j].second)
                {
                    br++;
                }
            }

            ans = min(ans, max({tl, tr, bl, br}));
        }
    }

    cout << ans << "\n";
}