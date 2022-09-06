#include <bits/stdc++.h>

using namespace std;
int field[2001][2001];

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);

    int currX = 1000, currY = 1000, time = 0, ans = 1001;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string dir;
        int numSteps, dx = 0, dy = 0;
        cin >> dir >> numSteps;

        if (dir == "N")
        {
            dy = 1;
        }
        else if (dir == "S")
        {
            dy = -1;
        }
        else if (dir == "W")
        {
            dx = -1;
        }
        else
        {
            dx = 1;
        }

        for (int i = 0; i < numSteps; i++)
        {
            currX += dx;
            currY += dy;
            time += 1;
            if (field[currX][currY] > 0 && time - field[currX][currY] < ans)
            {
                ans = time - field[currX][currY];
            }
            field[currX][currY] = time;
        }
    }

    if (ans == 1001)
    {
        ans = -1;
    }
    cout << ans << "\n";
}