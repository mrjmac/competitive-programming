#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> one(n, 0);
    vector<int> two(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> one[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> two[i];
    }

    sort(one.begin(), one.end());
    sort(two.begin(), two.end());

    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += 1ll * one[i] * two[n - i - 1];
    }

    cout << ans << "\n";
}