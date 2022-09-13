#include <bits/stdc++.h>

using namespace std;

int results[10][20];
int n, k;

bool isBetter(int a, int b, int round)
{
    int apos = 50, bpos = 50;
    for (int i = 0; i < n; i++)
    {
        if (results[round][i] == a)
        {
            apos = i;
        }
        if (results[round][i] == b)
        {
            bpos = i;
        }
    }
    return apos < bpos;
}

int numBetter(int a, int b)
{
    int count = 0;
    for (int round = 0; round < k; round++)
    {
        if (isBetter(a, b, round))
        {
            count += 1;
        }
    }
    return count;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    int ans = 0;
    cin >> k >> n;
    

    for (int i = 0; i < k; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> results[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (numBetter(i, j) == k)
            {
                ans += 1;
            }
        }
    }

    cout << ans << "\n";
}