#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, k, w;
    cin >> k >> n >> w;

    long cost = w * (w + 1) / 2;
    cost *= k;
    cout << max((int)(cost - n), 0) << "\n";
}