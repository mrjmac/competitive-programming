/*
ID: john38
TASK: dualpal
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

string baseConvert(int base10, int newBase)
{
    string ans = "";

    while (base10 > 0)
    {
        ans += base10 % newBase;
        base10 /= newBase;
    }

    string reverse(ans.rbegin(), ans.rend());
    return reverse;
}

bool isPalin(string one)
{
    string reverse(one.rbegin(), one.rend());
    return reverse == one;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("dualpal.in", "r", stdin);
    freopen("dualpal.out", "w", stdout);

    int n, s;
    cin >> n >> s;

    while (n != 0)
    {
        s++;
        int bases = 0;

        for (int i = 2; i <= 10; i++)
        {
            if (isPalin(baseConvert(s, i)))
            {
                bases++;
            }

            if (bases == 2)
            {
                cout << s << "\n";
                n--;
                break;
            }
        }
    }
}