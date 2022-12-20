#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int curr, temp;
    bool bruh = true;
    curr = 0;

    vector<int> ans;
    
    while (bruh == true)
    {
        cin >> temp;

        if (temp == -1)
        {
            bruh = false;
        }
        curr += temp;

        if (cin.get() == '\n' || cin.eof())
        {
            if (cin.get() == '\n' || cin.eof())
            {
                ans.push_back(curr);
                curr = 0;
            }
            else
            {
                cin.unget();
            }
        }
    }

    sort(ans.begin(), ans.end());

    int trueAns = ans[ans.size() - 3] + ans[ans.size() - 2] + ans[ans.size() - 1];

    cout << trueAns << "\n";
}