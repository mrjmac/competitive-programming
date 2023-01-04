#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin >> s;

    int suffix = 0, pow = 1;
    long long ans = 0;
    vector<int> count(2019);
    count[0] = 1;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        int digit = s[i] - '0';
        suffix = (suffix + digit * pow) % 2019;
        pow = 10 * pow % 2019;
        ans += count[suffix];
        
        count[suffix]++;
    }

    cout << ans << "\n";
}