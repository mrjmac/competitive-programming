#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> spotted(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        string genome;
        cin >> genome;
        for (int j = 0; j < m; j++)
        {
            if (genome[j] == 'A')
            {
                spotted[i][j] = 0;
            }
            else if (genome[j] == 'T')
            {
                spotted[i][j] = 1;
            }
            else if (genome[j] == 'C')
            {
                spotted[i][j] = 2;
            }
            else if (genome[j] == 'G')
            {
                spotted[i][j] = 3;
            }
        }
    }

    vector<vector<int>> plain(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        string genome;
        cin >> genome;
        for (int j = 0; j < m; j++)
        {
            if (genome[j] == 'A')
            {
                plain[i][j] = 0;
            }
            else if (genome[j] == 'T')
            {
                plain[i][j] = 1;
            }
            else if (genome[j] == 'C')
            {
                plain[i][j] = 2;
            }
            else if (genome[j] == 'G')
            {
                plain[i][j] = 3;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            for (int k = j + 1; k < m; k++)
            {
                vector<bool> spotted2(64);
                for (int scow = 0; scow < n; scow++)
                {
                    int total = (spotted[scow][i] * 16) + (spotted[scow][j] * 4) + (spotted[scow][k] * 1);
                    spotted2[total] = true;
                }

                bool valid = true;
                for (int normal = 0; normal < n; normal++)
                {
                    int total = (plain[normal][i] * 16) + (plain[normal][j] * 4) + (plain[normal][k] * 1);
                    if (spotted2[total])
                    {
                        valid = false;
                        break;
                    }
                }

                ans += valid;
            }
        }
    }

    cout << ans << "\n";
}