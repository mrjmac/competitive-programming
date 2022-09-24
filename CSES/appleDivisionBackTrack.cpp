#include <bits/stdc++.h>

using namespace std;

int n;
long long weights[20];

long long solve(int i, long long s1, long long s2)
{
    if (i == n)
    {
        return abs(s1 - s2);
    }

    return min(solve(i + 1, s1 + weights[i], s2), solve(i + 1, s1, s2 + weights[i]));
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }
    

    cout << solve(0, 0, 0) << "\n";
}