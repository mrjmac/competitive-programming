#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long long n;
    cin >> n;

    if (n % 3 != 0)
    {
        cout << (2 * (n / 3)) + 1 << "\n";
    }
    else
    {
        cout << (2 * (n / 3))<< "\n";
    }
}