#include <bits/stdc++.h>

using namespace std;
int enter[26], exitS[26];

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);

    string s;
    int ans = 0;
    cin >> s;

    fill(enter, enter + 26, -1);

    for (int i = 0; i < 52; i++)
    {
        if (enter[s[i] - 'A'] == -1)
        {
            enter[s[i] - 'A'] = i;
        }
        else
        {
            exitS[s[i] - 'A'] = i;
        }
    }

    for (int i = 0 ; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (enter[i] < enter[j] && enter[j] < exitS[i] && exitS[i] < exitS[j])
            {
                ans += 1;
            }
        }
    }

    cout << ans << "\n";
}