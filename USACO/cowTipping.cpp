#include <bits/stdc++.h>

using namespace std;

void flip (int x, int y, vector<vector<bool>> &test)
{
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= y; j++)
        {
            test[i][j] = !test[i][j];
        }
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("cowtip.in", "r", stdin);
    freopen("cowtip.out", "w", stdout);

    int n, ans = 0;
    cin >> n;

    vector<vector<bool>> board(n, vector<bool>(n));

    for (int i = 0; i < n; i++)
    {
        string curr;
        cin >> curr;
        for (int j = 0; j < n; j++)
        {
            board[i][j] = curr[j] == '1';
        }
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (board[i][j])
            {
                ans++;
                flip(i, j, board);
            }
        }
    }
    

    cout << ans << "\n";
}