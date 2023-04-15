#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long long n, b, x, y;
    cin >> n >> b >> x >> y;

    long long outer = (n * 4) - 4;
    long long inner = (n * n) - outer;

    cout << (b - (inner * x) - (outer * y) >= 0 ? "Walter will like this lab" : "Sorry Mr. Fring, no can do") << "\n";

}