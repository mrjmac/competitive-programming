#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> a(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> d(n, 1);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            if (a[j] < a[i])
            {
                d[i] = max(d[i], d[j] + 1);
            }
        }
    }

    int ans = d[0];

    for (int i = 1; i < n; i++) 
    {
        ans = max(ans, d[i]);
    }
    
    cout << ans << "\n";
}