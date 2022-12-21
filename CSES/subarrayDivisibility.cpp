#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    vector<long long> vals(n);
    long long sum = 0;
    vals[0] = 1;

    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;

        sum += curr;
        vals[(sum % n + n) % n]++;
    }

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += vals[i] * (vals[i] - 1) / 2;
    }

    cout << ans << "\n";
}