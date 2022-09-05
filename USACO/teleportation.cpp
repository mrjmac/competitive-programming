#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int ans = abs(a - b);
    ans = min(ans, abs(a - x) + abs(b - y));
    ans = min(ans, abs(a - y) + abs(b - x));
    cout << ans << "\n";
}