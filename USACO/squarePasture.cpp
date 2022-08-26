#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);

    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int low = min(x1, x3);
    int low2 = min(y1, y3);
    int high = max(x2, x4);
    int high2 = max(y2, y4);

    cout << max(high - low, high2 - low2) * max(high - low, high2 - low2) << "\n";
}