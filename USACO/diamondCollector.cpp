#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n, k, ans = 0;
    cin >> n >> k;

    vector<int> sizes(n);
    for (int i = 0; i < n; i++)
    {
        cin >> sizes[i];
    }

    sort(sizes.begin(), sizes.end());

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (sizes[j] - sizes[i] <= k)
            {
                count += 1;
            }
            else
            {
                break;
            }
        }
        ans = max(count, ans);
    }

    cout << ans << "\n";
}