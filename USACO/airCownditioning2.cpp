#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, m, ans = 10000;
    cin >> n >> m;

    vector<tuple<int, int, int>> cows(n);
    vector<tuple<int, int, int, int>> conds(m);
    vector<int> stallTemps(101);
    fill(stallTemps.begin(), stallTemps.end(), 0);

    for (int i = 0; i < n; i++)
    {
        int start, end, amount;
        cin >> start >> end >> amount;

        cows[i] = tie(--start, --end, amount);
    }

    for (int i = 0; i < m; i++)
    {
        int start, end, amount, cost;
        cin >> start >> end >> amount >> cost;

        conds[i] = tie(--start, --end, amount, cost);
    }

    for (int mask = 0; mask < (1 << m); mask++)
    {
        int currCost = 0;
        bool valid = true;
        //simulate using these sets of conditioners
        for (int j = 0; j < m; j++)
        {
            if (mask & (1 << j))
            {
                currCost += get<3>(conds[j]);
                for (int k = get<0>(conds[j]); k <= get<1>(conds[j]); k++)
                {
                    stallTemps[k] += get<2>(conds[j]);
                }
            }
            else
            {
                continue;
            }
        }
        //make sure that we can actually use this config
        for (int j = 0; j < n; j++)
        {
            for (int k = get<0>(cows[j]); k <= get<1>(cows[j]); k++)
            {
                if (stallTemps[k] < get<2>(cows[j]))
                {
                    valid = false;
                }
            }
        }
        //reset our temps back to how they used to be
        fill(stallTemps.begin(), stallTemps.end(), 0);

        if (valid)
        {
            ans = min(ans, currCost);
        }
    }

    cout << ans << "\n";
}