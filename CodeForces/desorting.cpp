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

        long long curr, last, low = 10e9;

        cin >> last;

        for (int i = 1; i < n; i++)
        {
            cin >> curr;
            low = min(low, curr - last);
            last = curr;
        }

        cout << (low < 0 ? 0 : (low / 2) + 1) << "\n";
    }
}