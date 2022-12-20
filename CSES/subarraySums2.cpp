#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long long n, x;
    cin >> n >> x;

    vector<long long> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    map<long long, int> vals;
    vals[0] = 1;

    long long ans = 0, prefix = 0;

    for (int i = 0; i < n; i++)
    {
        prefix += nums[i];

        ans += vals[prefix - x];

        vals[prefix]++;
    }

    cout << ans << "\n";
}