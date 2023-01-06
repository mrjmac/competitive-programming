#include <bits/stdc++.h>

using namespace std;

int barn[1001][1001];

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("paintbarn.in", "r", stdin);
    freopen("paintbarn.out", "w", stdout);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        barn[x1][y1]++;
        barn[x1][y2]--;
        barn[x2][y1]--;
        barn[x2][y2]++;
    }

    int ans = 0;

    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (i > 0)
            {
                barn[i][j] += barn[i - 1][j];
            }
            if (j > 0)
            {
                barn[i][j] += barn[i][j - 1];
            }
            if (i > 0 && j > 0)
            {
                barn[i][j] -= barn[i - 1][j - 1];
            }
            ans += (barn[i][j] == k); 
        }
    }

    cout << ans << "\n";

}