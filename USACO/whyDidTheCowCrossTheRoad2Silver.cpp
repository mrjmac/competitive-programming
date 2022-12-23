#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("maxcross.in", "r", stdin);
    freopen("maxcross.out", "w", stdout);
    
    int n, k, b;
    cin >> n >> k >> b;

    vector<int> lights(n + 1);
    lights[0] = 0;

    for (int i = 0; i < b; i++)
    {
        int curr;
        cin >> curr;

        lights[curr]++;
    }

    for (int i = 1; i <= n; i++)
    {
        lights[i] += lights[i - 1];
    }

    int ans = b;
    for (int i = 0; i <= n - k; i++)
    {
        int currDis = lights[i + k] - lights[i];
        ans = min(ans, currDis);
    }

    cout << ans << "\n";
}