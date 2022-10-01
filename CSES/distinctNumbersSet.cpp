#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    set<int> ans;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ans.insert(a);
    }

    cout << ans.size() << "\n";
}