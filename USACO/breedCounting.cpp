#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);

    int n, q;
    cin >> n >> q;

    vector<int> h(n + 1);
    vector<int> g(n + 1);
    vector<int> j(n + 1);

    for(int i = 0; i < n; i++)
    {
        h[i + 1] = h[i];
        g[i + 1] = g[i];
        j[i + 1] = j[i];

        int type;
        cin >> type;

        if (type == 1)
        {
            h[i + 1] += 1;
        }
        else if (type == 2)
        {
            g[i + 1] += 1;
        }
        else
        {
            j[i + 1] += 1;
        }
    }

    for (int i = 0; i < q; i++)
    {
        int start, end;
        cin >> start >> end;

        int a = h[end] - h[start - 1];
        int b = g[end] - g[start - 1];
        int c = j[end] - j[start - 1];

        cout << a << " " << b << " " << c << "\n";
    }

}