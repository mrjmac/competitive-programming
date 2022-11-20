#include <bits/stdc++.h>

using namespace std;

int n, cows[100], passes[100];

int whoPass(int cow)
{
    int left = -1, right = -1, lr = 1000, rr = 1000;

    for (int i = 0; i < n; i++)
    {
        if (cows[i] < cows[cow] && cows[cow] - cows[i] < lr)
        {
            left = i;
            lr = cows[cow] - cows[i];
        }
        if (cows[i] > cows[cow] && cows[i] - cows[cow] < rr)
        {
            right = i;
            rr = cows[i] - cows[cow];
        }
    }

    if (lr <= rr)
    {
        return left;
    }
    return right;

}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("hoofball.in", "r", stdin);
    freopen("hoofball.out", "w", stdout);

    cin >> n;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> cows[i];
    }

    for (int i = 0 ; i < n; i++)
    {
        passes[whoPass(i)]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (passes[i] == 0)
        {
            ans += 1;
        }

        if (i < whoPass(i) && whoPass(whoPass(i)) == i && passes[i] == 1 && passes[whoPass(i)] == 1)
        {
            ans += 1;
        }
    }

    cout << ans << "\n";

}