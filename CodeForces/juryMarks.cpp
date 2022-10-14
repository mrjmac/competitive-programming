#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int k, n;
    cin >> k >> n;

    vector<int> jury(k + 1);
    vector<int> recall(n);

    for (int i = 1; i <= k; i++)
    {
        cin >> jury[i];
        jury[i] += jury[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> recall[i];
    }

    set<int> start;
    for (int i = 1; i <= k; i++)
    {
        start.insert(recall.front() - jury[i]);
    }

    int ans = 0;

    for (int s : start)
    {
        set<int> points;

        for (int i = 1; i <= k; i++)
        {
            points.insert(s + jury[i]);
        }

        bool ok = true;
        for (int p : recall)
        {
            ok &= points.count(p);
        }

        ans += ok;
    }

    cout << ans << "\n";
}