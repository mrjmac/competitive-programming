#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, ans = 0;
    cin >> n;

    vector<int> nums(n + 1), prefix(n + 1), suffix(n + 1);
    prefix[0] = 0;
    suffix[n + 1] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> nums[i];

        prefix[i] = gcd(prefix[i - 1], nums[i]);
    }

    for (int i = n; i >= 1; i--)
    {
        suffix[i] = gcd(suffix[i + 1], nums[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, gcd(prefix[i - 1], suffix[i + 1]));
    }

    cout << ans << "\n";

}