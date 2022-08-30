#include <bits/stdc++.h>

using namespace std;
int times[1001];

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int start, end, buckets;
        cin >> start >> end >> buckets;

        times[start] += buckets;

        times[end] -= buckets;
    }

    int greatest = 0, cur = 0;
    for (int i = 0; i <= 1000; i++)
    {
        cur += times[i];
        greatest = max(greatest, cur);
    }

    cout << greatest << "\n";
}