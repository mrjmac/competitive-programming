#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    int BX = 0, BY = 0, RX = 0, RY = 0, LX = 0, LY = 0;
    for (int y = 0; y < 10; y++)
    {
        string a;
        cin >> a;
        for (int x = 0; x < 10; x++)
        {
            if (a[x] == 'B')
            {
                BX = x;
                BY = y;
            }

            if (a[x] == 'R')
            {
                RY = y;
                RX = x;
            }

            if (a[x] == 'L')
            {
                LX = x;
                LY = y;
            }
        }
    }

    int ans = abs(BX - LX) + abs(BY - LY) - 1;

    if (BY == LY && BY == RY && ((LX < RX && RX < BX) || (BX < RX && RX < LX)))
    {
        ans += 2;
    }
    else if (BX == LX && BX == RX && ((LY < RY && RY < BY) || (BY < RY && RY < LY)))
    {
        ans += 2;
    }

    cout << ans << "\n";
}