#include <bits/stdc++.h>

using namespace std;

string mother(string& below, vector<pair<string, string>> cows)
{
    for (pair<string, string> a : cows)
    {
        if (a.second == below)
        {
            return a.first;
        }
    }

    return "";
}

int dist(string& start, string end, vector<pair<string, string>>& cows)
{
    int dist = 0;
    while (end != "")
    {
        if (end == start)
        {
            return dist;
        }
        dist += 1;
        end = mother(end, cows);
    }

    return -1;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("family.in", "r", stdin);
    freopen("family.out", "w", stdout);

    int n;
    string cow1, cow2;
    cin >> n >> cow1 >> cow2;

    vector<pair<string, string>> cows(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cows[i].first >> cows[i].second;
    }

    int minx = 0, miny = 0;
    string common = cow1;

    while (!common.empty())
    {
        if (dist(common, cow2, cows) != -1)
        {
            miny = dist(common, cow2, cows);
            break;
        }

        common = mother(common, cows);
        minx += 1;
    }

    if (common.empty())
    {
        cout << "NOT RELATED" << "\n";
    }
    else if (minx > 1 && miny > 1)
    {
        cout << "COUSINS" << "\n";
    }
    else if (minx == 1 && miny == 1)
    {
        cout << "SIBLINGS" << "\n";
    }
    else if (minx == 0 || miny == 0)
    {
        bool anc = minx == 0;
        int ancDis = anc ? miny : minx;

        cout << (anc ? cow1 : cow2) << " is the ";
        for (int i = 0; i < ancDis - 2; i++)
        {
            cout << "great-";
        }
        if (ancDis > 1)
        {
            cout << "grand-";
        }
        cout << "mother of " << (anc ? cow2 : cow1) << "\n";
    }
    else
    {
        bool aunt = minx == 1;

        cout << (aunt ? cow1 : cow2) << " is the ";
        for (int i = 0; i < (aunt ? miny : minx) - 2; i++)
        {
            cout << "great-";
        }

        cout << "aunt of " << (aunt ? cow2 : cow1) << "\n";
    }
}