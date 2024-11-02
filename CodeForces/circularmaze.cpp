#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> visited(21, vector<int>(360));
vector<vector<int>> straight(20, vector<int>(360));
vector<vector<int>> circular(20, vector<int>(360));

void dfs(int r, int t)
{
    if (visited[r][t])
    {
        return;
    }

    visited[r][t] = 1;

    if (r == 20)
    {
        return;
    }

    if (!circular[r][t])
    {
        dfs(r + 1, t);
    }

    if (r > 0 && !circular[r - 1][t])
    {
        dfs(r - 1, t);
    }

    if (!straight[r][t])
    {
        dfs(r, (t + 359) % 360);
    }

    if (!straight[r][(t + 1) % 360])
    {
        dfs(r, (t + 1) % 360);
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        for (int i = 0; i < 20; i++)
        {
            for (int j = 0; j < 360; j++)
            {
                visited[i][j] = 0;
                straight[i][j] = 0;
                circular[i][j] = 0;

                visited[20][j] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;

            if (c == 'C')
            {
                int r, t1, t2;
                cin >> r >> t1 >> t2;
                r--;

                if (t1 > t2)
                {
                    t2 += 360;
                }

                for (int j = t1; j < t2; j++)
                {
                    circular[r][j % 360] = 1;
                }
            }
            else
            {
                int r1, r2, t;
                cin >> r1 >> r2 >> t;

                for (int j = r1; j < r2; j++)
                {
                    straight[j][t % 360] = 1;
                }
            }
        }

        dfs(0, 0);

        bool yes = false;
        for (int i = 0; i < 360; i++)
        {
            if (visited[20][i])
            {
                cout << "YES\n";
                yes = true;
                break;
            }
        }

        if (!yes)
        {
            cout << "NO\n";
        }

    }
}



