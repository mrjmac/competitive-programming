#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    vector<int> limits(3);
    vector<int> buckets(3);
    
    cin >> limits[0] >> buckets[0] >> limits[1] >> buckets[1] >> limits[2] >> buckets[2]; 

    for (int i = 0; i < 100; i++)
    {
        int pos = i % 3;
        int pos2 = (i + 1) % 3; // prevent out of bounds index
        int milk = min(buckets[pos], limits[pos2] - buckets[pos2]);
        buckets[pos] -= milk;
        buckets[pos2] += milk;
    }

    for (int i = 0; i < (int)limits.size(); i++)
    {
       cout << buckets[i] << "\n"; 
    }
}