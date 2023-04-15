#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> p(n + 2);
    p[0] = 0;
    p[n + 1] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }

    long long ans = 0;
    for (int i = 0; i <= n; i++)
    {
        ans += abs(p[i] - p[i + 1]);
    }

    cout << ans / 2 << "\n";
}