#include <bits/stdc++.h>

using namespace std;

int baseConv(int num, int base)
{
    return ((num / 100) * (base * base)) + (((num / 10) % 10) * (base)) + (num % 10);
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("whatbase.in", "r", stdin);
    freopen("whatbase.out", "w", stdout);

    int k;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int x, y, xB = 10, yB = 10;
        cin >> x >> y;

        while (xB <= 15000 && yB <= 15000)
        {
            int currX = baseConv(x, xB);
            int currY = baseConv(y, yB);

            if (currX < currY)
            {
                xB++;
            }
            else if (currY < currX)
            {
                yB++;
            }
            else
            {
                cout << xB << " " << yB << "\n";
                break;
            }
        }
    }
}