#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n, m;
    int speeding = 0;
    cin >> n >> m;
    
    int last = 0;
    vector<int> speedlimits(100);

    for (int i = 0; i < n; i++)
    {
        int length, speed;
        cin >> length >> speed;
        for (int k = last; k < last + length; k++)
        {
            speedlimits[k] = speed;
        }
        last += length;
    }

    last = 0;
    vector<int> bessieSpeeds(100);

    for (int i = 0; i < n; i++)
    {
        int length, speed;
        cin >> length >> speed;
        for (int k = last; k < last + length; k++)
        {
            bessieSpeeds[k] = speed;
        }
        last += length;
    }
    
    for (int i = 0; i < 100; i++)
    {
        speeding = max(speeding, bessieSpeeds[i] - speedlimits[i]);
    }

    cout << speeding;

}