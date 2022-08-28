#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int n;
    cin >> n;
    
    int a[n];
    int tags[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> tags[i];
    }
    
    for (int i = 0; i < 3; i++)
    {
        int temp[n];
        for (int j = 0; j < n; j++)
        {
            temp[j] = tags[a[j] - 1];
        }

        for (int j = 0; j < n; j++)
        {
            tags[j] = temp[j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << tags[i] << "\n";
    }
    
}