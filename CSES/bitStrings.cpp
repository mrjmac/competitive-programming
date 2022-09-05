#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, ans = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ans *= 2;
        ans %= 1000000007;
    }

    cout << ans << "\n";
}