#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        deque<pair<int, int>> state;
        state.emplace_back(0, 0);

        for (int i = 1; i <= n + 1; i++)
        {
            int a = 0;
            if (i != n + 1)
            {
                cin >> a;
            }

            while (state.back().second < i - k)
            {
                state.pop_back();
            }

            a = max(a, state.back().first);

            while (state.size() && state.front().first >= a)
            {
                state.pop_front();
            }

            state.emplace_front(a, i);
        }

        cout << state.front().first << "\n";
    }
}