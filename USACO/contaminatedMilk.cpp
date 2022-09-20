#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("badmilk.in", "r", stdin);
    freopen("badmilk.out", "w", stdout);

    int n, m, d, s, ans = 0;
    cin >> n >> m >> d >> s;

    vector<array<int, 3>> events(d + s);

    for (int i = 0; i < (d + s); i++)
    {
        if (i < d)
        {
            int p, mi, t;
            cin >> p >> mi >> t;
            events[i] = {p - 1, mi, t};
        }
        else
        {
            int p, t;
            cin >> p >> t;
            events[i] = {p - 1, -1, t};
        }
    }

    sort(events.begin(), events.end(), [](auto &left, auto &right)
    {
        return left[2] != right[2] ? left[2] < right[2] : left[1] < right[1];
    });

    for (int i = 0; i <= m; i++)
    {
        vector<bool> sick(n);
        bool valid = true;

        for (int j = 0; j < (int) events.size(); j++)
        {
            if (events[j][1] == -1)
            {
                if (!sick[events[j][0]])
                {
                    valid = false;
                    break;
                }
            }
            else if (events[j][1] == i)
            {
                sick[events[j][0]] = true;
            }
        }

        if (valid)
        {
            int curr = 0;
            for (bool a : sick)
            {
                curr += a;
            }
            ans = max(curr, ans);
        }
    }

    cout << ans << "\n";
}