#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("revegetate.in", "r", stdin);
    freopen("revegetate.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<int> ans(n);
    vector<int> a(m);
    vector<int> b(m);

    for (int i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];

        if (a[i] > b[i])
        {
            swap(a[i], b[i]);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        int g;
        for (g = 1; g <= 4; g++)
        {
            bool valid = true;
            for (int j = 0; j < m; j++)
            {
                if (b[j] == i && ans[a[j]] == g)
                {
                    valid = false;
                }
            }
            if (valid)
            {
                break;
            }
        }

        cout << g;
        ans[i] = g;
    }

    cout << "\n";
}