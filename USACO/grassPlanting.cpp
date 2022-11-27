#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("planting.in", "r", stdin);
    freopen("planting.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> edges(n);

    for (int i = 0; i < n - 1; i++)
    {
        int one, two;
        cin >> one >> two;

        edges[one - 1]++;
        edges[two - 1]++;
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = max(ans, edges[i]);
    }

    cout << ans + 1 << "\n";
}