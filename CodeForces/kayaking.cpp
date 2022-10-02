#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    
    n *= 2;

    vector<int> people(n);
    for (int i = 0; i < n; i++)
    {
        cin >> people[i];
    }

    sort(people.begin(), people.end());

    int ans = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            vector<int> people2;
            for (int l = 0; l < n; l++)
            {
                if (l != i && l != j)
                {
                    people2.push_back(people[l]);
                }
            }

            int curr = 0;
            for (int l = 0; l < n - 2; l += 2)
            {
                curr += people2[l + 1] - people2[l];
            }
            ans = min(curr, ans);
        }
    }
    cout << ans << "\n";
}