#include <bits/stdc++.h>

using namespace std;

bool intersection(int i, int j, vector<string> characteristics[], vector<string> allChar, int n)
{
    int fakei = 0, fakej = 0, ij = 0;

    for (int k = 0; k < n; k++)
    {
        vector<string> &copy = characteristics[k];
        bool itrue = false, jtrue = false;

        for (int m = 0; m < (int) copy.size(); m++)
        {
            if (copy[m] == allChar[i])
            {
                itrue = true;
            }

            if (copy[m] == allChar[j])
            {
                jtrue = true;
            }
        }

        if (itrue && jtrue)
        {
            ij += 1;
        }
        else if (itrue)
        {
            fakei += 1;
        }
        else if (jtrue)
        {
            fakej += 1;
        }
    }

    return ij > 0 && fakei > 0 && fakej > 0;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("evolution.in", "r", stdin);
    freopen("evolution.out", "w", stdout);

    int n;
    cin >> n;
    string s;
    vector<string> characteristics[25];
    vector<string> allChar;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> s;
            characteristics[i].push_back(s);

            bool found = false;
            for (int k = 0; k < (int) allChar.size(); k++)
            {
                if (allChar[k] == s)
                {
                    found = true;
                }
            }

            if (!found)
            {
                allChar.push_back(s);
            }
        }
    }

    int a = allChar.size();
    bool valid = true;

    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (intersection(i, j, characteristics, allChar, n))
            {
                valid = false;
            }
        }
    }

    cout << (valid ? "yes" : "no") << "\n";
}