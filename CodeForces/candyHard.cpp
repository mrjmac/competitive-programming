#include <bits/stdc++.h>

using namespace std;

struct fasterset
{
    priority_queue<int, vector<int>, greater<int>> pq, trash;

    void insert(int x)
    {
        pq.emplace(x);
    }

    void remove(int x)
    {
        trash.emplace(x);
    }

    int get()
    {
        while (trash.size() && pq.top() == trash.top())
        {
            pq.pop();
            trash.pop();
        }

        return pq.top();
    }
};

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (n < k)
        {
            cout << 0 << "\n";
        }
        else
        {
            vector<int> dp(n + 2, 0);
            //multiset<int> low;
            fasterset low;
            
            for (int i = 1; i <= k; i++)
            {
                cin >> dp[i];
                low.insert(dp[i]);
            }

            for (int i = k + 1; i <= n; i++)
            {
                int curr;
                cin >> curr;

                int prev = low.get();//*low.begin();
                dp[i] = max(curr, prev);

                low.insert(dp[i]);
                //low.erase(low.find(dp[i - k]));
                low.remove(dp[i - k]);
            }

            int ans = low.get();//*low.begin();

            cout << ans << "\n";
        }
    }
}