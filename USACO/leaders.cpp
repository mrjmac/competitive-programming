#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, ans = 0;
    string s;
    cin >> n >> s;

    vector<int> e(n), prefixH(n + 1), prefixG(n + 1), pLeaderH(n + 1), pLeaderG(n);
    vector<bool> possibleLeader(n);
    prefixH[0] = 0;
    prefixG[0] = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'H')
        {
            prefixH[i]++;
        }

        if (s[i] == 'G')
        {
            prefixG[i]++;
        }

        cin >> e[i];
        e[i]--;
    }

    for (int i = 1; i < n; i++)
    {
        prefixG[i] += prefixG[i - 1];
        prefixH[i] += prefixH[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'G')
        {
            possibleLeader[i] = prefixG[n - 1] == (prefixG[e[i]] - prefixG[i] + 1);
            pLeaderG[i] = possibleLeader[i];
        }

        if (s[i] == 'H')
        {
            possibleLeader[i] = prefixH[n - 1] == (prefixH[e[i]] - prefixH[i] + 1);
            pLeaderH[i] = possibleLeader[i];
        }

        if (i > 0)
        {
            pLeaderH[i] += pLeaderH[i - 1];
            pLeaderG[i] += pLeaderG[i - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'H')
        {
            if (possibleLeader[i])
            {
                ans += pLeaderG[n - 1] - pLeaderG[i];
            }
            else
            {
                ans += pLeaderG[e[i]] - pLeaderG[i];
            }
        }

        if (s[i] == 'G')
        {
            if (possibleLeader[i])
            {
                ans += pLeaderH[n - 1] - pLeaderH[i];
            }
            else
            {
                ans += pLeaderH[e[i]] - pLeaderH[i];
            }
        }
    }

    cout << ans << "\n";

}