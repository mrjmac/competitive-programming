#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);

    string s, t;
    cin >> s >> t;

    string ans;
    for (int i = 0; i < (int)s.size(); i++)
    {
        ans += s[i];
        if (ans.size() >= t.size())
        {
            if (ans.substr(ans.size() - t.size()) == t)
            {
                ans.resize(ans.size() - t.size());
            }
        }
    }
    cout << ans << "\n";
}