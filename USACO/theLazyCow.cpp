#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("lazy.in", "r", stdin);
    freopen("lazy.out", "w", stdout);

    int n, k;
    cin >> n >> k;

    int rotate = 2 * n - 1;
    vector<vector<int>> field(rotate, vector<int>(rotate));
    vector<vector<int>> prefix(rotate + 1, vector<int>(rotate + 1));


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> field[i + j][n - i + j - 1];
        }
    }

    for (int i = 0; i < rotate; i++)
    {
        for (int j = 0; j < rotate; j++)
        {
            prefix[i + 1][j + 1] = field[i][j] + prefix[i + 1][j] + prefix[i][j + 1] - prefix[i][j];
        }
    }

    int ans = 0;
    for (int i = k; i < rotate - k; i++)
    {
        for (int j = k; j < rotate - k; j++)
        {
            ans = max(ans, prefix[i + k + 1][j + k + 1] - prefix[i + k + 1][j - k] - prefix[i - k][j + k + 1] + prefix[i - k][j - k]);
        }
    }

    if (k >= n)
    {
        ans = prefix[rotate][rotate];
    }

    cout << ans << "\n";

}