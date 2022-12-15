#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, odd = 0, even = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    while (odd > even)
    {
        even += 1;
        odd -= 2;
    }

    if (even > odd + 1)
    {
        even = odd + 1;
    }

    cout << odd + even << "\n";
}