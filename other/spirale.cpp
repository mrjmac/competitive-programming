#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> spiral(n, vector<int>(m));
    vector<int> dx, dy;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            spiral[i][j] = 1e9;
        }
    }

    for (int i = 0; i < k; i++)
    {
        int xi, yi, ti;
        cin >> xi >> yi >> ti;

        xi--, yi--;
        swap(xi, yi);

        if (ti == 0)
        {
            dx = {-1, 0, 1, 0};
            dy = {0, -1, 0, 1};
        }
        else
        {
            dx = {1, 0, -1, 0};
            dy = {0, -1, 0, 1};
        }

        int curDis = 1, distance = 1, cur = 1, count = 0, c = 2;

        if (xi >= 0 && xi < m && yi >= 0 && yi < n)
        {
            count += 1;
            spiral[yi][xi] = min(cur, spiral[yi][xi]);
        }

        while (true)
        {
            if (count >= n * m)
            {
                break;
            }

            if (c == 0)
            {
                distance += 1;
                c = 2;
            }

            for (int j = 0; j < distance; j++)
            {
                xi += dx[curDis];
                yi += dy[curDis];

                cur += 1;
                if (xi >= 0 && xi < m && yi >= 0 && yi < n)
                {
                    count += 1;
                    spiral[yi][xi] = min(cur, spiral[yi][xi]);
                }
            }
            
            c-= 1;
            curDis = (curDis + 1) % 4;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << spiral[i][j] << " ";
        }
        cout << "\n";
    }
}