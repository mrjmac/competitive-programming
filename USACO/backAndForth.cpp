#include <bits/stdc++.h>

using namespace std;

vector<int> nums1(10);
vector<int> nums2(10);
set<int> ans;

void find_permutations(int day, int a, vector<int> newnums, int b, vector<int> newnums2)
{
    if (day == 4)
    {
        ans.insert(a);
        return;
    }
    for (int i = 0; i < (int) newnums.size(); i++)
    {
        int curr = newnums[i];

        vector<int> tempA = newnums;
        tempA.erase(begin(tempA) + i);
        vector<int> tempB = newnums2;
        tempB.push_back(curr);

        find_permutations(day + 1, b + curr, tempB, a - curr, tempA);
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("backforth.in", "r", stdin);
    freopen("backforth.out", "w", stdout);

    for (int i = 0; i < 10; i++)
    {
        cin >> nums1[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> nums2[i];
    }
    
    find_permutations(0, 1000, nums1, 1000, nums2);

    cout << ans.size() << "\n";
}