#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for (int i = 0 ; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0 ; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0 ; i < n; i++)
    {
        cin >> c[i];
    }

    map<int, int> anum;
    for (int i : a)
    {
        anum[i]++;
    }

    long long ans = 0;

    for (int i : c)
    {
        ans += anum[b[i - 1]];
    }

    cout << ans << "\n";
}