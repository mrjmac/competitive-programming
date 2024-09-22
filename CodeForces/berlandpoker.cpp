#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int cards = n / k;
        int jokers = min(cards, m);
        int others = ((m - jokers) + (k - 1) - 1) / (k - 1);

        cout << jokers - others << "\n";
    }
}