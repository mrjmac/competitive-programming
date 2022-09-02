#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> ans(26);

    for (int i = 0; i < n; i++)
    {
        string word1, word2;
        cin >> word1 >> word2;
        vector<int> freq1(26), freq2(26);
        for (char c : word1)
        {
            freq1[c - 'a']++;
        }

        for (char c : word2)
        {
            freq2[c - 'a']++;
        }

        for (int i =  0; i < 26; i++)
        {
            ans[i] += max(freq1[i], freq2[i]);
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << ans[i] << "\n";
    }
}