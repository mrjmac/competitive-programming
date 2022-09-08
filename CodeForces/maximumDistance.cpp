#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, ans = 0;
    cin >> n;
    vector<int> x(n), y(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int disx = x[i] - x[j];
            int disy = y[i] - y[j];
            int pos = disx * disx + disy * disy;
            ans = max(pos, ans);
        }
    }
    cout << ans << "\n";

}
