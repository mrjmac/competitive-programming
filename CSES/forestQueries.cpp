#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, q;
    cin >> n >> q;

    int forest[n + 1][n + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                forest[i][j] = 0;
            }
            else
            {
                char c;
                cin >> c;
            
                forest[i][j] = (c == '*');
                forest [i][j] += forest[i][j - 1] + forest[i - 1][j] - forest[i - 1][j - 1];
            }
        }
    }

    for (int i = 0; i < q; i++)
    {
        int x1, x2, y1, y2;
        cin >> y1 >> x1 >> y2 >> x2;

        cout << forest[y2][x2] - forest[y1 - 1][x2] - forest[y2][x1 - 1] + forest[y1 - 1][x1 - 1] << "\n";
    }
}