#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);

    int n;
    string boxes;
    cin >> n >> boxes;

    for (int i = 1; i <= n; i++)
    {
        bool solved = true;
        unordered_map<string, int> let_freq;
        for (int j = 0; j <= n - i; j++)
        {
            string curr = boxes.substr(j, i);
            let_freq[curr]++;
            if (let_freq[curr] > 1)
            {
                solved = false;
            }
        }

        if (solved)
        {
            cout << i << "\n";
            break;
        }
    }
}