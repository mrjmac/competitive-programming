#include <bits/stdc++.h>

using namespace std;


bool isConsistent(int patientZero, int k, vector<array<int, 3>> shakes, vector<bool> cowsInfected)
{
    vector<bool> tempInfec((int) cowsInfected.size());
    vector<int> numShakes((int) cowsInfected.size());
    tempInfec[patientZero] = true;

    for (array<int, 3> shake : shakes)
    {
        if (tempInfec[shake[1]])
        {
            numShakes[shake[1]]++;
        }
        if (tempInfec[shake[2]])
        {
            numShakes[shake[2]]++;
        }
        if (numShakes[shake[1]] <= k && tempInfec[shake[1]])
        {
            tempInfec[shake[2]] = true;
        }
        if (numShakes[shake[2]] <= k && tempInfec[shake[2]])
        {
            tempInfec[shake[1]] = true;
        }
    }

    for (int i = 0; i < (int) cowsInfected.size(); i++)
    {
        if (tempInfec[i] != cowsInfected[i])
        {
            return false;
        }
    }
    return true;
}


int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("tracing.in", "r", stdin);
    freopen("tracing.out", "w", stdout);

    int n, t;
    string s;
    cin >> n >> t >> s;

    unordered_set<int> ans;
    vector<array<int, 3>> shakes(t);
    vector<bool> cowsInfected(n);
    int minK = t, maxK = -1;

    for (int i = 0; i < n; i++)
    {
        cowsInfected[i] = (s[i] == '1');
    }

    for (int i = 0; i < t; i++)
    {
        int x, y, z;
        cin >> z >> x >> y;

        shakes[i] = {z - 1, x - 1, y - 1};
    }

    sort(shakes.begin(), shakes.end(), [](auto &left, auto &right)
    {
        return left[0] < right[0];
    });

    for (int patZ = 0; patZ < n; patZ++)
    {
        for (int k = 0; k <= t; k++)
        {
            if (isConsistent(patZ, k, shakes, cowsInfected))
            {
                ans.insert(patZ);
                minK = min(minK, k);
                maxK = max(maxK, k);
            }
        }
    }
    

    cout << ans.size() << " " << minK << " " << (maxK == t ? "Infinity" : to_string(maxK)) << "\n";

}