#include <bits/stdc++.h>

using namespace std;

vector<int> nums(4);

int checkEdgecaseIForgotAbout(int sign, int num1, int num2)
{
    switch (sign)
    {
        case 0:
            return num1 - num2;
        case 1 : 
        {
            if (num2 == 0 || num1 % num2)
            {
                return -1e9;
            }
            return num1 / num2;
        }
        case 2 :
            return num1 + num2;
        case 3 :
            return num1 * num2;
    }
    return 0;
}

int recur(int i, int a)
{
    if (i == 3)
    {
        if (a > 24)
        {
            return 0;
        }
        else
        {
            return a;
        }
    }
    else
    {
        int big = max({recur(i + 1, a * nums[i + 1]), recur(i + 1, a + nums[i + 1]), recur(i + 1, a - nums[i + 1])});

        if (i == 1)
        {
            for (int l = 0; l < 4; l++)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (checkEdgecaseIForgotAbout(l, a, checkEdgecaseIForgotAbout(j, nums[2], nums[3])) > big && checkEdgecaseIForgotAbout(l, a, checkEdgecaseIForgotAbout(j, nums[2], nums[3])) <= 24)
                    {
                        big = checkEdgecaseIForgotAbout(l, a, checkEdgecaseIForgotAbout(j, nums[2], nums[3]));
                    }
                }
            }       
        }

        if (nums[i + 1] == 0 || a % nums[i + 1] != 0)
        {
            return big;
        }
        else
        {
            return max(big, recur(i + 1, a / nums[i + 1]));
        }
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    int ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ans = 0;

        for (int j = 0; j < 4; j++)
        {
            cin >> nums[j];
        }

        sort(nums.begin(), nums.end());
        
        do
        {
            ans = max(ans, recur(0, nums[0]));
        }
        while (next_permutation(nums.begin(), nums.end()));

        cout << ans << "\n";
    }
}