#include <bits/stdc++.h>

using namespace std;

bool check(map<char, bool> one, map<char, bool> two)
{
    return (one['A'] == true && two['A']) || (one['C'] == true && two['C']) || (one['T'] == true && two['T']) || (one['G'] == true && two['G']);
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int n, m, ans = 0;
    cin >> n >> m;
    char dna[n * 2][m];

    for (int i = 0; i < n * 2; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> dna[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        map<char, bool> letters1 = {{'A', false}, {'C', false}, {'T', false}, {'G', false}};
        map<char, bool> letters2 = {{'A', false}, {'C', false}, {'T', false}, {'G', false}};
        for (int j = 0; j < n; j++)
        {
            letters1[dna[j][i]] = true;
            letters2[dna[(n * 2) - j - 1][i]] = true;
            if (check(letters1, letters2))
            {
                break;
            }
            if (j == n - 1)
            {
                ans += 1;
            }
        }
    }

    cout << ans << "\n";
}