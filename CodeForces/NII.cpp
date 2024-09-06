#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    vector<pair<int, int>> times;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        times.push_back(make_pair(a, b));
    }

    sort(times.begin(), times.end(), [](auto &left, auto &right) 
    {
        return left.second < right.second;
    });

    int ans = 1;
    int curr = 0;

    for (int i = 1; i < n; i++)
    {
        if (times[i].first <= times[curr].second)
        {
            continue;
        }
        else
        {
            ans++;
            curr = i;
        }
    }

    cout << ans << "\n";

    curr = 0;
    for (int i = 1; i < n; i++)
    {
        if (times[i].first <= times[curr].second)
        {
            continue;
        }
        else
        {
            cout << times[curr].first << " " << times[curr].second << "\n";
            ans++;
            curr = i;
        }
    }

    cout << times[curr].first << " " << times[curr].second << "\n";
}