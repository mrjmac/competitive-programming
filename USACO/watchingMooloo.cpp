#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    vector<long long> days(n);

    for (int i = 0; i < n; i++)
    {
        cin >> days[i];
    }

    long long prev = days[0];
    long long ans = k + 1;

    for (int i = 1; i < n; i++)
    {
        ans += min(days[i] - prev, (long long) k + 1);
        prev = days[i];
    }

    cout << ans << "\n";
}