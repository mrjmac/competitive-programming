#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("sleepy.in", "r", stdin);
    freopen("sleepy.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> cows(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cows[i];
    }

    // Looking at base case of 2 cows, if they are not in order it only takes one move(n - 1) to sort them. This holds true for the worst case scamble for all values of n.
    int ans = n - 1;

    // The order that the cows are scambled in doesn't change our answer, as we can tell from our first rule. 
    for (int i = n - 2; i >= 0; i--)
    {
        if (cows[i] < cows[i + 1])
        {
            ans = i;
        }
        else
        {
            break;
        }
    }

    cout << ans << "\n";
}