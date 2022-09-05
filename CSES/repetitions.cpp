#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int high = 1, count = 1;
    string test;

    cin >> test;

    for(int i = 1; i <= test.length(); i++)
    {
        if (test[i] != test[i - 1])
        {
            high = max(high, count);
            count = 0;
        }
        count++;
    }
    high = max(high, count);
    cout << high << "\n";
}