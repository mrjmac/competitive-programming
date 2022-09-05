#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    for (long i = 1; i <= n; i++)
    {
        cout << ((i * i) * ((i * i) - 1) / 2) - (4 * (i - 1) * (i - 2)) << "\n";
    }
}