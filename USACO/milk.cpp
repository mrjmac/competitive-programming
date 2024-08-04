/*
ID: john38
TASK: milk
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("milk.in", "r", stdin);
    freopen("milk.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    
    int milk[1001] = {0};

    for (int i = 0; i < m; i++)
    {
        int p, a;
        cin >> p >> a;

        milk[p] += a;
    }

    int ans = 0, needed = n, i = 0;

    while (i < 1001 && needed > 0)
    {
        if (needed >= milk[i])
        {
            needed -= milk[i];
            ans += (i * milk[i]);
        }
        else if (milk[i] > 0)
        {
            ans += (i * needed);
            needed = 0;
        }

        i++; 
    }

    cout << ans << "\n";
    
}