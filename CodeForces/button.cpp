#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    int ans = 0;


    while (n != m)
    {
        if (m > n)
        {
            if (m % 2 == 0)
            {
                m /= 2;
                ans++;
            }
            else
            {
                m++;
                ans++;
            }
        }
        else
        {
            m++;
            ans++;
        }
    }

    cout << ans << "\n";
}