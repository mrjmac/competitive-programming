#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);

    int n;
    cin >> n;
    int x[n], y[n], ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if(y[i] == y[j] && x[i] == x[k]) 
                {
                    int area = abs((x[j] - x[i]) * (y[k] - y[i]));
                    ans = max(ans, area); 
                }
            }
        }
    }
    cout << ans << "\n";
}