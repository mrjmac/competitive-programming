#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long a;
    cin >> a;

    while (a != 1)
    {
        cout << a << " ";
        
        if (a % 2 == 0)
        {
            a /= 2;
        }
        else
        {
            a = (a * 3) + 1;
        }
    }

    cout << a << " ";
}