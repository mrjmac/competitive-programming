#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int zero = 0;
        int one = 0;

        for (int i = 0; i < (int) s.length(); i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        int moves = min(zero, one);

        cout << (moves % 2 == 0 ? "NET" : "DA") << "\n";
    }
}