#include <bits/stdc++.h>

using namespace std;

vector<string> cows{"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};
vector<pair<string, string>> rules;

int findIdx(string a)
{
    for (int i = 0; i < 8; i++)
    {
        if (cows[i] == a)
        {
            return i;
        }
    }
    return -1;
}

bool check()
{
    for (pair<string, string> rule : rules)
    {
        int idx1 = findIdx(rule.first);
        int idx2 = findIdx(rule.second);
        if (!(idx1 - 1 == idx2 || idx1 + 1 == idx2))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name1, random, random2, random3, random4, name2;
        cin >> name1 >> random >> random2 >> random3 >> random4 >> name2;

        rules.push_back(make_pair(name1, name2));
    }

    do
    {
        if (check())
        {
            break;
        }
    }
    while (next_permutation(cows.begin(), cows.end()));

    for (int i = 0; i < 8; i++)
    {
        cout << cows[i] << "\n";
    }
}