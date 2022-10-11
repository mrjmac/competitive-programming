#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("citystate.in", "r", stdin);
    freopen("citystate.out", "w", stdout);

    int n, ans = 0;
    cin >> n;

    vector<pair<string, string>> locations;

    for (int i = 0; i < n; i++)
    {
        string city, state;
        cin >> city >> state;

        locations.push_back(make_pair(city.substr(0, 2), state));
    }

    map<string, int> common;

    for (pair<string, string> loc : locations)
    {
        if (loc.first != loc.second)
        {
            ans += common[loc.second + loc.first];
        }

        common[loc.first + loc.second] += 1;
    }

    cout << ans << "\n";
}