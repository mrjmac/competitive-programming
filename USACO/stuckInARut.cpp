#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    vector<array<int, 3>> north, east;
    
    vector<int> stop(n);
    for (int i = 0; i < n; i++)
    {
        stop[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        string dir;
        int x, y;
        cin >> dir >> x >> y;
        
        if (dir == "N")
        {
            north.push_back({x, y, i});
        }
        else
        {
            east.push_back({x, y, i});
        }
        
    }
    
    sort(north.begin(), north.end());
    sort(east.begin(), east.end(), [](auto &left, auto &right)
    {
        return left[1] < right[1];
    });
    
    
    for (array<int, 3> n : north)
    {
        for (array<int, 3> e : east)
        {
            if (n[0] > e[0] && n[1] < e[1])
            {
                int nd = e[1] - n[1];
                int ed = n[0] - e[0];
                if (nd < ed && stop[e[2]] == -1)
                {
                    stop[e[2]] = ed;
                }
                else if (ed < nd && stop[e[2]] == -1)
                {
                    stop[n[2]] = nd;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (stop[i] == -1)
        {
            cout << "Infinity" << "\n";
        }
        else
        {
            cout << stop[i] << "\n";
        }
    }
    
}