/*
ID: john38
TASK: beads
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("beads.in", "r", stdin);
    freopen("beads.out", "w", stdout);

    int n;
    string s;

    cin >> n >> s;
    s += s;

    int left[n * 2 + 1][2], right[n * 2 + 1][2];

    left[0][0] = 0, left[0][1] = 0;
    right[n * 2][0] = 0, right[n * 2][1] = 0;

    for (int i = 1; i <= (n * 2); i++)
    {
        if (s[i - 1] == 'r')
        {
            left[i][0] = left[i - 1][0] + 1;
            left[i][1] = 0;
        }
        else if (s[i - 1] == 'b')
        {
            left[i][1] = left[i - 1][1] + 1;
            left[i][0] = 0;
        }
        else
        {
            left[i][0] = left[i - 1][0] + 1;
            left[i][1] = left[i - 1][1] + 1;
        }
    }

    for (int i = (2 * n - 1); i >= 0; i--)
    {
        if (s[i] == 'r')
        {
            right[i][0] = right[i + 1][0] + 1;
            right[i][1] = 0;
        }
        else if (s[i] == 'b')
        {
            right[i][1] = right[i + 1][1] + 1;
            right[i][0] = 0;
        }
        else
        {
            right[i][0] = right[i + 1][0] + 1;
            right[i][1] = right[i + 1][1] + 1;
        }
    }

    int ans = 0;
    for (int i = 0; i < (2 * n); i++)
    {
        ans = max(ans, max(left[i][0], left[i][1]) + max(right[i][0], right[i][1]));
    }

    cout << min(ans, n) << "\n";    
}