#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);

    int n, ans = 0;
    cin >> n;

    vector<tuple<int, string, int>> list;
    map<string, int> cows = {{"Bessie", 7}, {"Elsie", 7}, {"Mildred", 7}};
    pair<int, string> winner = make_pair(7, "BessieElsieMildred");
    
    for (int i = 0; i < n; i++)
    {
        int day, change;
        string name;
        cin >> day >> name >> change;
        list.push_back(make_tuple(day, name, change));
    }
    
    
    sort(list.begin(), list.end());

    for (int i = 0; i < n; i++)
    {
        string name = get<1>(list[i]);
        int change = get<2>(list[i]);
        cows[name] += change;

        pair<int, string> old = make_pair(winner.first, winner.second);

        winner.second = "";
        winner.first = max({cows["Bessie"], cows["Mildred"], cows["Elsie"]});

        if (cows["Bessie"] == winner.first)
        {
            winner.second += "Bessie";
        }
        if (cows["Mildred"] == winner.first)
        {
            winner.second += "Mildred";
        }
        if (cows["Elsie"] == winner.first)
        {
            winner.second += "Elsie";
        }

        if (old.second != winner.second)
        {
            ans += 1;
        }
    }

    cout << ans << "\n";


}