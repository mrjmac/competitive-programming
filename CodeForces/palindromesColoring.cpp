#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t, k;
        string s;
        cin >> t >> k >> s;

        vector<int> freq(26);
    
        for(char c : s)
        {
            freq[c - 'a']++;
        }

        int odd = 0, even = 0;
        for (int i : freq)
        {
            odd += i % 2;
            even += i / 2;
        }

        int ans = (even / k) * 2;
        odd += (even % k ) * 2;

        if (odd >= k)
        {
            ans += 1;
        }

        cout << ans << "\n";
    }
}