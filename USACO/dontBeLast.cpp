#include <bits/stdc++.h>

using namespace std;


int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);

    map<string, int> cows = {{"Bessie", 0}, {"Elsie", 0}, {"Daisy", 0}, {"Gertie", 0}, {"Annabelle", 0}, {"Maggie", 0}, {"Henrietta", 0}};

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string cow;
        int unit;

        cin >> cow >> unit;

        cows[cow] += unit;
    }

    vector<pair<int, string>> fakeMap;

    for (const auto& cow : cows)
    {
        fakeMap.push_back({cow.second, cow.first});
    }

    sort(fakeMap.begin(), fakeMap.end());

    int i = 0;
    int last;
    bool curr = false;
    string ans = "Tie";

    for (pair<int, string> cow : fakeMap)
    {
        if (i == 0)
        {
            last = cow.first;
        }
        else
        {
            if (cow.first > last && !curr)
            {
                curr = true;
                ans = cow.second;
            }
            else if (curr)
            {
                if (cow.first == last)
                {
                    cout << "Tie" << "\n";
                    return 0;
                }
                if (cow.first > last)
                {
                    cout << ans << "\n";
                    return 0;
                }
            }

            last = cow.first;
        }
        i++;
    }

    cout << ans << "\n";

}