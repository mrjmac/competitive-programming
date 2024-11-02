#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int maxR = 0, maxW = 0;

        for (int i = 0; i < m; i++)
        {
            int r, w;
            cin >> r >> w;
            
            maxR = max(maxR, r);
            maxW = max(maxW, w);
        }

        if (maxW + maxR > n)
        {
            cout << "IMPOSSIBLE\n";
        }
        else
        {
            string ans = "";
            for (int i = 0; i < n; i++)
            {
                if (i < maxR)
                {
                    ans += "R";
                }
                else
                {
                    ans += "W";
                }
            }

            cout << ans << "\n";
        }
    }
}