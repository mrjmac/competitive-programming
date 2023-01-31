#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    vector<long long> nums(n + 1);
    nums[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> nums[i];
        nums[i] += nums[i - 1];
    }

    long long small = 10e9;
    long long ans = -10e9;

    for (int i = 0; i <= n; i++)
    {
        ans = max(ans, nums[i] - small);
        small = min(small, nums[i]);
    }

    cout << ans << "\n";
}