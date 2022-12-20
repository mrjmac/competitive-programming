#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, q;
    cin >> n >> q;

    vector<long long> prefix(n + 1);
    prefix[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> prefix[i];
    }

    for (int i = 1; i <= n; i++)
    {
        prefix[i] += prefix[i - 1];
    } 

    for (int i = 0; i < q; i++)
    {
        int li, ri;
        cin >> li >> ri;

        cout << prefix[ri] - prefix[li] << "\n";
    }
}