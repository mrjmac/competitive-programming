#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ans(10, 0);

        for (int i = 0; i < n; i++)
        {
            int b, d;
            cin >> b >> d;
            d--;
            ans[d] = max(ans[d], b);
        }

        long long finans = 0;
        bool correct = true;
        for (int i = 0; i < 10; i++)
        {
            if (ans[i] == 0)
            {
                cout << "MOREPROBLEMS\n";
                correct = false;
                break;
            }

            finans += ans[i];
        }

        if (correct)
        {
            cout << finans << "\n";
        }
    }
}