#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;

        if (curr % 2 != 0)
        {
            ans++;
        }
    }

    cout << ans << "\n";
}