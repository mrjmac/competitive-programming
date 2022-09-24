#include <bits/stdc++.h>

using namespace std;

int findBal(int x_line, const vector<pair<int, int>> cows)
{
    vector<pair<int, int>> left;
    vector<pair<int, int>> right;
    for (pair<int, int> c : cows)
    {
        if (c.first < x_line)
        {
            left.push_back(c);
        }
        else if (c.first > x_line)
        {
            right.push_back(c);
        }
    }

    int mostbal = INT32_MAX;
    int left_at = 0;
    int right_at = 0;

    while (left_at + right_at < (int) cows.size())
    {
        int y_line = cows[left_at + right_at].second + 1;

        while (left_at < (int) left.size() && y_line > left[left_at].second)
        {
            left_at++;
        }

        while (right_at < (int) right.size() && y_line > right[right_at].second)
        {
            right_at++;
        }

        int bmax = max(left_at, right_at);
        int amax = max(left.size() - left_at, right.size() - right_at);

        mostbal = min(mostbal, max(amax, bmax));
    }

    return mostbal;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);
    
    int n;
    cin >> n;

    vector<pair<int, int>> cowsx(n);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        cowsx[i] = make_pair(x, y);
    }

    sort(cowsx.begin(), cowsx.end(), [](auto &left, auto &right)
    {
        return left.first < right.first;
    });

    vector<pair<int, int>> cowsy(cowsx);
    sort(cowsy.begin(), cowsy.end(), [](auto &left, auto &right)
    {
        return left.second < right.second;
    });

    
    int ans = INT32_MAX;
    int x_line_at = 0;

    while (x_line_at < (int) cowsx.size())
    {
        int x_line = cowsx[x_line_at].first + 1;
        ans = min(ans, findBal(x_line, cowsy));

        while (x_line_at < n && x_line > cowsx[x_line_at].first)
        {
            x_line_at++;
        }
    }

    cout << ans << "\n";
}