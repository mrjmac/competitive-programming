/*
ID: john38
TASK: gift1
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);

    int n;
    cin >> n;

    unordered_map<string, int> friends;
    vector<string> names(n);

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        friends[name] = 0;
        names[i] = name;
    }

    for (int i = 0; i < n; i++)
    {
        string name;
        int total, people;

        cin >> name >> total >> people;

        if (people > 0)
        {
            friends[name] += (total % people) - total;

            for (int j = 0; j < people; j++)
            {
                string recName;
                cin >> recName;

                friends[recName] += total / people;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << names[i] << " " << friends[names[i]] << "\n";
    }
}