#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long long q, a, v, k;
    cin >> q;

    unordered_map<long long, long long> map;

    for (int i = 0; i < q; i++)
    {
        cin >> a >> v;

        if (a == 0)
        {
            cin >> k;

            map[v] = k;
        }
        else
        {
            cout << map[v] << "\n";
        }
    }
}