#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if ((int) s.length() < 3)
        {
            cout << -1 << "\n";
        }
        else
        {
            bool MOO = false, MOM = false, OOM = false, OOO = false;

            for (int j = 0; j <= ((int) s.length() - 3); j++)
            {
                string curr = s.substr(j, 3);
                if (curr == "MOO")
                {
                    MOO = true;
                }
                else if (curr == "MOM")
                {
                    MOM = true;
                }
                else if (curr == "OOM")
                {
                    OOM = true;
                }
                else if (curr == "OOO")
                {
                    OOO = true;
                }
            }

            if (MOO)
            {
                cout << s.length() - 3 << "\n";
            }
            else if (MOM || OOO)
            {
                cout << s.length() - 2 << "\n";
            }
            else if (OOM)
            {
                cout << s.length() - 1 << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
    }
}