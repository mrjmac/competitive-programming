#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("art.in", "r", stdin);
    freopen("art.out", "w", stdout);

    vector<int> left(10);
    vector<int> right(10);
    vector<int> down(10);
    vector<int> up(10);

    for (int i = 1; i < 10; i++)
    {
        left[i] = up[i] = INT32_MAX;
        right[i] = down[i] = -1;
    }

    vector<bool> valid(10);

    int n;
    cin >> n;

    vector<vector<int>> painting(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char curr;
            cin >> curr;

            int rn = curr - '0';
            painting[i][j] = rn;

            if (rn != 0)
            {
                left[rn] = min(left[rn], j);
                right[rn] = max(right[rn], j);
                down[rn] = max(down[rn], i);
                up[rn] = min(up[rn], i);
                valid[rn] = true;
            }
        }
    }

    for (int i = 1; i < 10; i++)
    {
        for (int j = up[i]; j <= down[i]; j++)
        {
            for (int k = left[i]; k <= right[i]; k++)
            {
                if (painting[j][k] != i)
                {
                    valid[painting[j][k]] = false;
                }
            }
        }
    }

    int ans = 0;

    for (bool s : valid)
    {
        ans += s ? 1 : 0;
    }

    cout << ans << "\n";
}