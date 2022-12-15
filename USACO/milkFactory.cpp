#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> connections(n);

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;

        a--, b--;

        connections[a] += 1;
    }

    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        if (connections[i] == 0)
        {
            if (ans == -1)
            {
                ans = i + 1;
            }
            else
            {
                ans = -1;
                break;
            }
        }
    }

    cout << ans << "\n";
}