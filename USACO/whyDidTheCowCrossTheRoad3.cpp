#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);

    int n, endTime = 0;
    cin >> n;
    vector<pair<int, int>> info(n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        info[i] = make_pair(a, b);
    }

    sort(info.begin(), info.end());

    for (int i = 0; i < n; i++)
    {   
        if (info[i].first > endTime)
        {
            endTime = info[i].first;
        }

        endTime += info[i].second;
    }

    cout << endTime << "\n";
}