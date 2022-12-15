#include <bits/stdc++.h>

using namespace std;

int d;

int solve(int speed)
{
    int currDF = 0, currDL = 0, cspeed = 1, ans = 0;

    while (true)
    {
        currDF += cspeed;
        ans += 1;

        if (currDF + currDL >= d)
        {
            return ans;
        }

        if (cspeed >= speed)
        {
            currDL += cspeed;
            ans += 1;

            if (currDF + currDL >= d)
            {
                return ans;
            }
        }

        cspeed += 1;
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("race.in", "r", stdin);
    freopen("race.out", "w", stdout);

    int n;
    cin >> d >> n;

    for (int i = 0; i < n; i++)
    {
        int speed;
        cin >> speed;

        cout << solve(speed) << "\n";
    }
}