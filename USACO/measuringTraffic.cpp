#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);

    int large = 1e9, small = -large, n;
    cin >> n;

    vector<string> type(n);
    vector<int> start(n);
    vector<int> end(n);

    for (int i = 0; i < n; i++)
    {
        cin >> type[i] >> start[i] >> end[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (type[i] == "on")
        {
            small -= end[i];
            large -= start[i];
            small = max(0, small);
        }
        else if (type[i] == "off")
        {
            small += start[i];
            large += end[i];
        }
        else if (type[i] == "none")
        {
            small = max(small, start[i]);
            large = min(large, end[i]);
        }
    }

    cout << small << " " << large << "\n";

    for (int i = 0; i < n; i++)
    {
        if (type[i] == "off")
        {
            small -= end[i];
            large -= start[i];
            small = max(0, small);
        }
        else if (type[i] == "on")
        {
            small += start[i];
            large += end[i];
        }
        else if (type[i] == "none")
        {
            small = max(small, start[i]);
            large = min(large, end[i]);
        }
    }

    cout << small << " " << large << "\n";
}