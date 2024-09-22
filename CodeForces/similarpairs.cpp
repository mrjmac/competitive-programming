#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> nums(n);

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());

        int odd = 0, even = 0, close = 0;

        nums[0] % 2 == 0 ? even++ : odd++;

        for (int i = 1; i < n; i++)
        {
            if (nums[i] - nums[i - 1] == 1)
            {
                close++;
            }

            nums[i] % 2 == 0 ? even++ : odd++;
        }

        if (even % 2 == 0 || close)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}