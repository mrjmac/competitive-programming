#include <bits/stdc++.h>

using namespace std;

int a[100000];

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("taming.in", "r", stdin);
    freopen("taming.out", "w", stdout);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    if (a[0] > 0)
    {
        cout << -1 << "\n";
    }

    a[0] = 0;

    int t = -1;
    int req = 0;
    int pos = 0;
    
    for (int i = n - 1; i >= 0; i--)
    {
        if (t != -1 && a[i] != -1 && a[i] != t)
        {
            cout << -1 << "\n";
            return 0;
        }
        
        if (t == -1)
        {
            t = a[i];
        }
        if (a[i] == -1)
        {
            a[i] = t;
        }
        if (a[i] == 0)
        {
            req++;
        }
        if (a[i] == -1)
        {
            pos++;
        }
        if (t > -1)
        {
            t--;
        }
    }

    cout << req << " " << req + pos << "\n";
    
}