#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0 ; i < t; i++)
    {
        int n;
        cin >> n;

        vector<long long> hunger(n + 1);

        for (int j = 1; j <= n; j++)
        {
            cin >> hunger[j];
        }

        long long ans = 0;

        for (int j = 1; j < n; j++)
        {
            if (hunger[j + 1] > hunger[j])
            {
                if (j + 2 > n)
                {
                    ans = -1;
                    break;
                }

                long long diff = hunger[j + 1] - hunger[j];
                hunger[j + 1] -= diff;
                hunger[j + 2] -= diff;

                if (hunger[j + 2] < 0)
                {
                    ans = -1;
                    break;
                }

                ans += diff * 2;
            }
            else if (hunger[j] > hunger[j + 1])
            {
                if (j % 2 == 1)
                {
                    ans = -1;
                    break;
                }

                long long diff = hunger[j] - hunger[j + 1];

                ans += diff * j;
            }
        }

        cout << ans << "\n";

    }
}