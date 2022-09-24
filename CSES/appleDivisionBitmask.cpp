#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    long long weights[20];

    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    long long ans = LONG_LONG_MAX;

    for (int i = 0; i < (1 << n); i++)
    {
        long long s1 = 0, s2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                s1 += weights[j];
            }
            else
            {
                s2 += weights[j];
            }
        }
        ans = min(ans, abs(s1 - s2));
    }
    
    cout << ans << "\n";
}