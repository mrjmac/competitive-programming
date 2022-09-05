#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, a, b, c;
    cin >> n;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a + b + c > 1)
        {
            ans += 1;
        }
    }

    cout << ans << "\n";
}