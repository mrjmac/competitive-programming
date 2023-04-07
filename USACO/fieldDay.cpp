#include <bits/stdc++.h>

using namespace std;

long long bruh2(long long one, long long two)
{
    return __builtin_popcount(one ^ two);
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long long n, c;
    cin >> n >> c;

    vector<string> bruh(c);

    for (long long i = 0; i < c; i++)
    {
        cin >> bruh[i];
    }

    vector<long long> fast(c);

    for (long long i = 0; i < c; i++)
    {
        long long goat = 0;
        string curr = bruh[i];

        for (long long j = 0; j < (int) curr.length(); j++)
        {
            if (curr[j] == 'G')
            {
                goat = (goat << 1) | 1;
            }
            else
            {
                goat = (goat << 1) | 0;
            }
        }

        fast[i] = goat;
    }

    unordered_map<long long, long long> map;
    vector<long long> ans(c);

    for (long long i = 0; i < c; i++)
    {
        if (map.find(fast[i]) != map.end())
        {
            ans[i] = map[fast[i]];
        }
        else
        {
            long long curr = 0;
            for (long long j = 0; j < (int) fast.size(); j++)
            {
                curr = max(curr, bruh2(fast[i], fast[j]));
            }
            map[fast[i]] = curr;
            ans[i] = curr;
        }
    }

    for (long long i : ans)
    {
        cout << i << "\n";
    }


   
}