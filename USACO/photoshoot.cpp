#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, ans = 0;
    string s;
    cin >> n >> s;

    for (int i = n - 2; i >= 0; i -= 2)
    {
        if (s[i] != s[i + 1] && (s[i] == 'G') == (ans % 2 == 0))
        {
            ans += 1;
        }
    }

    cout << ans << "\n";
}