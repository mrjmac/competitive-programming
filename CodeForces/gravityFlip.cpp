#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> freq(101, 0);

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        freq[num]++;
    }

    for (int i = 1; i <= 100; i++)
    {
        for (int j = 0; j < freq[i]; j++)
        {
            cout << i << " ";
        }
    }
}