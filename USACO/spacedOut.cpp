#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, row = 0, col = 0;
    cin >> n;

    int pos[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> pos[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int odd = 0, even = 0;

        for (int j = 0; j < n; j += 2)
        {
            even += pos[i][j];
        }

        for (int j = 1; j < n; j += 2)
        {
            odd += pos[i][j];
        }

        row += max(even, odd);
    }

    for (int i = 0; i < n; i++)
    {
        int odd = 0, even = 0;

        for (int j = 0; j < n; j += 2)
        {
            even += pos[j][i];
        }

        for (int j = 1; j < n; j += 2)
        {
            odd += pos[j][i];
        }

        col += max(even, odd);
    }

    cout << max(row, col) << "\n";
}