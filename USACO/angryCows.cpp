#include <bits/stdc++.h>

using namespace std;

int n, ans = 0;
vector<int> gameMap;

int getAns(int pos, int dir)
{
    int distance = 1;
    int prev = pos;

    while(true)
    {
        int next = prev;

        while (next + dir >= 0 && next + dir < n && abs(gameMap[next + dir] - gameMap[prev]) <= distance)
        {
            next += dir;
        }

        if (next == prev)
        {
            break;
        }

        prev = next;
        distance += 1;
    }

    return abs(prev - pos);

}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("angry.in", "r", stdin);
    freopen("angry.out", "w", stdout);

    cin >> n;
    gameMap.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> gameMap[i];
    }

    sort(gameMap.begin(), gameMap.end());

    for (int i = 0; i < n; i++)
    {
        ans = max(ans, getAns(i, -1) + getAns(i, 1) + 1);
    }

    cout << ans << "\n";
}