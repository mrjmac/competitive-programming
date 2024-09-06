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

        times.push_back(make_pair(a, 0));
        times.push_back(make_pair(b, 1));
    }

    sort(times.begin(), times.end(), [](auto &left, auto &right) 
    {
        if (left.first != right.first)
        {
            return left.first < right.first;
        }
        
        return left.second > right.second;
    });

    int ans = 0;
    int curr = 0;

    for (int i = 0; i < n * 2; i++)
    {
        if (times[i].second == 0)
        {
            curr++;
        }
        else
        {
            curr--;
        }

        ans = max(ans, curr);
    }

    cout << ans << "\n";


}