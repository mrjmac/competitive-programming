#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    string s;
    long long ans = 0;
    cin >> s;

    vector<long long> prev((long long) s.length(), 0);

    for (long long i = (long long) s.length() - 6; i >= 0; i--)
    {
        if (s[i] == 'b')
        {
            string fav = "bessie";
            long long len = 6;

            long long target = 0;
            long long count = 0;
            long long total = 0;

            for (long long j = i; j < (long long) s.length(); j++)
            {
                if (s[j] == fav[target])
                {
                    target++;

                    if (target == len)
                    {
                        count++;
                        target = 0;
                    }
                }

                total += count;
            }

            prev[i] = total;
            ans += prev[i];
            
        }
        else
        {
            prev[i] = prev[i + 1];
            ans += prev[i];
        }
    }

    cout << ans << "\n";

}