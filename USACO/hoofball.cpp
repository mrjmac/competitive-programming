#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> cows(100);

int solve(int pos, int ans, int dir, int limit)
{
    if ((pos == 0 && dir == -1) || (pos == n && dir == 1))
    {
        return ans;
    }
    
    int L = cows[pos] - cows[pos - 1];
    int R = cows[pos + 1] - cows[pos];

    
    if (L > R)
    {
        if (dir == 1)
        {
            solve(pos + 1, ans, 1, limit);
        }
        if (dir == -1)
        {
            solve(pos - 1, ans, -1, limit);
        }
    }
    else
    {
        solve(limit, ans + 1, dir * -1, pos);
        //return 0;
    }
    

    return 0;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int ans = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> cows[i];
    }

    sort(cows.begin(), cows.end());

    ans = solve(1, ans, 1, n);

    cout << ans << "\n";

}
