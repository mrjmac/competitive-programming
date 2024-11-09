#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int p, u;
    cin >> p >> u;

    int n = p + u;
    vector<int> vals(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> vals[i];
    }

    vector<int> pinned(vals.begin(), vals.begin() + p);
    vector<int> unpinned(vals.begin() + p, vals.end());
    reverse(unpinned.begin(), unpinned.end());

    int pf, uf;
    cin >> pf >> uf;

    vector<int> final(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> final[i];
    }

    vector<int> pinnedFinal(final.begin(), final.begin() + pf);
    vector<int> unpinnedFinal(final.begin() + pf, final.end());
    reverse(unpinnedFinal.begin(), unpinnedFinal.end());

    int ans = 0;

    vector<int> seen;
    for (int i = 0; i < pinnedFinal.size(); i++) 
    {
        bool pin = false;
        bool two = false;

        for (int j = 0; j < pinned.size(); j++) 
        {
            if (pinned[j] == pinnedFinal[i]) 
            {
                pin = true;
                for (int k = j + 1; k < (int) pinned.size(); k++) 
                {
                    if (find(seen.begin(), seen.end(), pinned[k]) != seen.end()) 
                    {
                        two = true;
                    }
                }
            }
        }

        if (!pin) 
        {
            ans++;
            unpinned.erase(remove(unpinned.begin(), unpinned.end(), pinnedFinal[i]), unpinned.end());
            pinned.push_back(pinnedFinal[i]);
        } 
        else if (two) 
        {
            ans += 2;
            pinned.erase(remove(pinned.begin(), pinned.end(), pinnedFinal[i]), pinned.end());
            pinned.push_back(pinnedFinal[i]);
        }

        seen.push_back(pinnedFinal[i]);
    }

    seen.clear();
    for (int i = 0; i < unpinnedFinal.size(); i++) 
    {
        bool unpin = false;
        bool two = false;

        for (int j = 0; j < unpinned.size(); j++) 
        {
            if (unpinned[j] == unpinnedFinal[i]) 
            {
                unpin = true;
                for (int k = j + 1; k < unpinned.size(); k++) 
                {
                    if (find(seen.begin(), seen.end(), unpinned[k]) != seen.end()) 
                    {
                        two = true;
                    }
                }
            }
        }

        if (!unpin) 
        {
            ans++;
            pinned.erase(remove(pinned.begin(), pinned.end(), unpinnedFinal[i]), pinned.end());
            unpinned.push_back(unpinnedFinal[i]);
        } 
        else if (two) 
        {
            ans += 2;
            unpinned.erase(remove(unpinned.begin(), unpinned.end(), unpinnedFinal[i]), unpinned.end());
            unpinned.push_back(unpinnedFinal[i]);
        }

        seen.push_back(unpinnedFinal[i]);
    }

    cout << ans << endl;
}
