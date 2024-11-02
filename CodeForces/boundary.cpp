#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        int l, w;
        cin >> l >> w;

        set<int> divisors;
        divisors.insert(2);

        int g = gcd(w, l - 2);
        for (int i = 1; i < sqrt(g) + 1; i++)
        {
            if (g % i == 0)
            {
                divisors.insert(i);
                divisors.insert(g / i);
            }
        }

        g = gcd(w - 1, l - 1);
        for (int i = 1; i < sqrt(g) + 1; i++)
        {
            if (g % i == 0)
            {
                divisors.insert(i);
                divisors.insert(g / i);
            }
        }

        g = gcd(w - 2, l);
        for (int i = 1; i < sqrt(g) + 1; i++)
        {
            if (g % i == 0)
            {
                divisors.insert(i);
                divisors.insert(g / i);
            }
        }

        cout << divisors.size() << " ";

        for (auto num : divisors)
        {
            cout << num << " ";
        }
        cout << "\n";
    }
}