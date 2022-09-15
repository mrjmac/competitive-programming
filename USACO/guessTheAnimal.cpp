#include <bits/stdc++.h>

using namespace std;

int overlap(vector<string> a, vector<string> b)
{
    int ans = 0;
    for (int i = 0 ; i < (int) a.size(); i++)
    {
        for (int j = 0; j < (int) b.size(); j++)
        {
            if (a[i] == b[j])
            {
                ans += 1;
                break;
            }
        }
    }
    return ans;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("guess.in", "r", stdin);
    freopen("guess.out", "w", stdout);

    int n, ans = 0;
    cin >> n;

    vector<vector<string>> desc(n);

    for (int i = 0 ; i < n; i++)
    {
        string name;
        int numChar;
        cin >> name >> numChar;

        for (int j = 0; j < numChar; j++)
        {
            string attri;
            cin >> attri;
            desc[i].push_back(attri);
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int curr = overlap(desc[i], desc[j]) + 1;
            ans = max(ans, curr);
        }
    }

    cout << ans << "\n";
}