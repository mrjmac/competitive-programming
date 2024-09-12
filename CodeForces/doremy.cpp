#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> contest(n, 0);
        vector<int> ans(n, 0);

        for (int i = 0 ; i < n; i++)
        {
            cin >> contest[i];
        }

        int eiq = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (contest[i] <= eiq)
            {
                ans[i] = 1;
            }
            else if (eiq < q)
            {
                eiq++;
                ans[i] = 1;
            }
            else
            {
                ans[i] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i];
        }

        cout << "\n";
    }
}