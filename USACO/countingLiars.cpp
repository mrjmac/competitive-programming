#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, ans = n;
    cin >> n;

    vector<pair<int, char>> cows(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cows[i].second >> cows[i].first;
    }

    sort(cows.begin(), cows.end());

    vector<int> left(n);
    vector<int> right(n);

    for (int i = 1; i < n; i++)
    {
        left[i] += left[i - 1];

        if (cows[i - 1].second == 'L' && cows[i].first > cows[i - 1].first)
        {
            left[i] += 1;
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        right[i] += right[i + 1];

        if (cows[i + 1].second == 'G' && cows[i].first < cows[i + 1].first)
        {
            right[i] += 1;
        }
    }

    for(int i = 0; i < n; i++)
    {
        ans = min(ans, left[i] + right[i]);
    }

    cout << ans << "\n";

}