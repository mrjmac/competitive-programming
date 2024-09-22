#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;

        b = min(b, 2 * a);

        cout << (min(x, y) * b) + (abs(x - y)) * a << "\n";
    }
}