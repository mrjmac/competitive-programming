#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, ans = 0;
    cin >> n;

    string r, b, s;
    cin >> s;

    for (int i = 0; i < n / 2; i++)
    {
        r += "rb";
        b += "br";
    }

    if (n % 2 != 0)
    {
        r += "r";
        b += "b";
    }

    int red = 0, blue = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != r[i])
        {
            if (s[i] == 'r')
            {
                red++;
            }
            else
            {
                blue++;
            }
        }
    }

    ans = max(red, blue);

    red = 0, blue = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != b[i])
        {
            if (s[i] == 'r')
            {
                red++;
            }
            else
            {
                blue++;
            }
        }
    }

    ans = min(ans, max(red, blue));
    
    cout << ans << "\n";
}