#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0 ; i < t; i++)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> days(n);

        for (int k = 0; k < n; k++)
        {
            cin >> days[k];
            sum += days[k];
        }

        for (int k = n; k >= 1; k--)
        {
            if (sum % k == 0)
            {
                int target = sum / k;
                int curr = 0;
                bool valid = true;

                for (int j = 0; j < n; j++)
                {
                    curr += days[j];
                    if (curr > target)
                    {
                        valid = false;
                        break;
                    }

                    if (curr == target)
                    {
                        curr = 0;
                    }
                }

                if (valid)
                {
                    cout << n - k << "\n";
                    break;
                }
            }
        }
    }
}