/*
ID: john38
TASK: friday
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("friday.in", "r", stdin);
    freopen("friday.out", "w", stdout);

    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ans[7] = {0};
    int day = 0;

    int n;
    cin >> n;

    for (int i = 1900; i < 1900 + n; i++)
    {
        for (int m = 0; m < 12; m++)
        {
            ans[day]++;
            int leap = (m == 1 && i % 4 == 0 && (i % 100 != 0 || i % 400 == 0));
            day = (day + days[m] + leap) % 7;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << ans[i] << " ";
    }

    cout << ans[6] << "\n";
    
}