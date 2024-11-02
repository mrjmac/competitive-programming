#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> freq(51, 0);

    for (int i = 0; i < n * 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int num;
            cin >> num;

            freq[num]++;
        }
    }

    bool none = true;
    for (int i = 0; i < 50; i++)
    {
        if (freq[i + 1] > n * 2)
        {
            cout << i + 1 << " ";
            none = false;
        }
    }

    if (none)
    {
        cout << -1;
    }

    cout << "\n";
}