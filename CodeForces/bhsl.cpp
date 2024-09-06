#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, first;
    cin >> n >> first;

    priority_queue<int, vector<int>, greater<int>> prices;
    prices.push(first);

    long long ans = 0;

    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;

        if (!prices.empty() && prices.top() < a)
        {
            ans += (a - prices.top());
            prices.pop();
            prices.push(a);
        }

        prices.push(a);
    }

    cout << ans << "\n";
}