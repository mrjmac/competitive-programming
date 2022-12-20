#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);

    int n, ans = 0, curr = 0;
    cin >> n;

    vector<int> remainder(7, -1);
    remainder[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        int cow;
        cin >> cow;

        curr = (curr + cow) % 7;

        if (remainder[curr] == -1)
        {
            remainder[curr] = i;
        }
        else
        {
            ans = max(ans, i - remainder[curr]);
        }
    }

    cout << ans << "\n";
}