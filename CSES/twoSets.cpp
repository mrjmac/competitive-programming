#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long n;
    cin >> n;

    long val = (n * (n + 1)) / 2;
    if (val % 2 != 0)
    {
        cout << "NO";
    }
    else
    {
        if (n % 4 == 0)
        {
            cout << "YES" << "\n" << n / 2 << "\n";

            int i = 1;
            int run = 0;
            while (i <= n)
            {
                cout << i << " ";
                if (run % 2  == 0)
                {
                    i += 3;
                    run = 1;
                }
                else
                {
                    i += 1;
                    run = 0;
                }
            }
            cout << "\n" << n / 2 << "\n";
            i = 2, run = 0;

            while (i <= n)
            {
                cout << i << " ";
                if (run % 2 == 0)
                {
                    i += 1;
                    run = 1;
                }
                else
                {
                    i += 3;
                    run = 0;
                }
            }
        }
        else if (n % 4 == 3)
        {
            cout << "YES" << "\n" << ((int)n / 2) + 1 << "\n" << 1 << " " << 2 << " ";
            int i = 4;
            int run = 0;
            while (i <= n)
            {
                cout << i << " ";
                if (run % 2 == 0)
                {
                    i += 3;
                    run = 1;
                }
                else
                {
                    i += 1;
                    run = 0;
                }
            }
            cout << "\n" << (int)n / 2 << "\n" << 3 << " ";
            i = 5;
            run = 0;
            while ( i <= n)
            {
                cout << i << " ";
                if (run % 2 == 0)
                {
                    i += 1;
                    run = 1;
                }
                else
                {
                    i += 3;
                    run = 0;
                }
            }
        }
        else
        {
            cout << "NO";
        }
    }
}