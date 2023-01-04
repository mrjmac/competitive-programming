#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    long long ans = 0, prefix = 0;
    cin >> n;

    vector<long long> mod(n);
    mod[0] = 1;

    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;

        prefix = (prefix + (curr % n) + n) % n;
        ans += mod[prefix];
        mod[prefix]++;
    }

    cout << ans << "\n";
}