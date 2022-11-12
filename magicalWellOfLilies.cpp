#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0 ; i < t; i++)
    {
        int l;
        cin >> l;
        if (l == 14 || l == 15)
        {
            cout << "Case #" << i + 1 << ": " << 13 << "\n";
        }
        else if (l == 16 || l == 18)
        {
            cout << "Case #" << i + 1 << ": " << 14 << "\n";
        }
        else if (l == 17 || l == 19 || l == 20)
        {
            cout << "Case #" << i + 1 << ": " << 15 << "\n";
        }
        else
        {
            cout << "Case #" << i + 1 << ": " << l << "\n";
        }

    }
}