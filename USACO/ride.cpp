/*
ID: john38
TASK: ride
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);

    string a, b;
    long long totalA = 1, totalB = 1;
    cin >> a >> b;

    for (char c : a)
    {
        totalA *= (c - 64);
    }

    for (char c : b)
    {
        totalB *= (c - 64);
    }

    totalA %= 47;
    totalB %= 47;

    cout << (totalA == totalB ? "GO" : "STAY") << "\n";
}