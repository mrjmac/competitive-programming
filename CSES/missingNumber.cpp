#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long n;
    cin >> n;

    long total = (n * (n + 1)) / 2;
    long incom = 0;

    for (int i = 0; i < n - 1; i++)
    {
        long a; 
        cin >> a;
        incom += a;
    }

    cout << total - incom << "\n";
}