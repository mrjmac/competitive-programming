#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> ans(5, 0);

    while (n - 25 >= 0)
    {
        ans[0]++;
        n -= 25;
    }

    while (n - 10 >= 0)
    {
        ans[1]++;
        n -= 10;
    }

    while (n - 5 >= 0)
    {
        ans[2]++;
        n -= 5;
    }

    while (n - 2 >= 0)
    {
        ans[3]++;
        n -= 2;
    }

    while (n - 1 >= 0)
    {
        ans[4]++;
        n -= 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << ans[4 - i] << " ";
    }
}