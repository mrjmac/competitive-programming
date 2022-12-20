#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, q;
    cin >> n >> q;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    } 

    for (int i = 0; i < q; i++)
    {
        int li, ri;
        cin >> li >> ri;

        cout << a[ri - 1] - (li ? a[li - 1] : 0) << "\n";
    }
}