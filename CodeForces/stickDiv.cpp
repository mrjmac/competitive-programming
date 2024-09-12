#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int x, n;
    cin >> x >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;

        pq.push(curr);
    }

    long long ans = 0;
    for (int i = 1; i < n; i++)
    {
        int a = pq.top();
        pq.pop();

        int b = pq.top();
        pq.pop();

        pq.push(a + b);
        ans += (a + b);
    }

    cout << ans << "\n";
}