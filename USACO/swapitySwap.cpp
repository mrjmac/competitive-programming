#include <bits/stdc++.h>

using namespace std;

int next(int i, int a1, int a2, int b1, int b2)
{
    if (a1 <= i && i <= a2)
    {
        i = a1 + a2 - i;
    }
    if (b1 <= i && i <= b2)
    {
        i = b1 + b2 - i;
    }
    return i;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("swap.in", "r", stdin);
    freopen("swap.out", "w", stdout);

    int ans[101]; // 1 indexing is way easier for this problem
    int n, k, a1, a2, b1, b2;
    cin >> n >> k >> a1 >> a2 >> b1 >> b2;

    for (int i = 1; i <= n; i++)
    {
        int cycle = 1, curr = next(i, a1, a2, b1, b2);
        while (curr != i)
        {
            cycle += 1;
            curr = next(curr, a1, a2, b1, b2);
        }

        int loop = k % cycle;

        for (int j = 0; j < loop; j++)
        {
            curr = next(curr, a1, a2, b1, b2);
        }

        ans[curr] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << "\n";
    }
}