#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a > b)
        {
            if (b * 2 < a)
            {
                cout << "NO" << "\n";
            }
            else if ((a + b) % 3 == 0)
            {
                cout <<"YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
        else
        {
            if (a * 2 < b)
            {
                cout << "NO" << "\n";
            }
            else if ((a + b) % 3 == 0)
            {
                cout <<"YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }
}