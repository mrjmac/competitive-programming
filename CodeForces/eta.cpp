#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int a, b;
    char garbage;
    cin >> a >> garbage >> b;

    vector<int> graph;
    graph.push_back(1);

    bool valid = false;

    for (int i = 1; i <= 10000; i++) 
    {
        int maxNode = i - 1;
        int sum = ((i - 1) * i) / 2;

        if (i % b == 0) 
        {
            int target = (i / b) * a;

            if (target >= maxNode && target <= sum)
            {
                vector<int> ans(i);
                
                for (int j = 1; j < i; j++) 
                {
                    ans[j] = j - 1;
                }

                if (sum - target > 0)
                {
                    for (int j = maxNode; j >= 0; j--) 
                    {
                        int curr = j - 1;

                        int newPos = max(0, curr - (sum - target));
                        ans[j] = newPos;

                        sum -= curr;

                        if (sum - target <= 0)
                        {
                            break;
                        }
                    }
                }

                cout << i << " " << i - 1 << '\n';

                for (int j = 1; j < i; j++) 
                {
                    cout << ans[j] + 1 << " " << j + 1 << '\n';
                }

                valid = true;
                break;
            }
        }
    }

    if (!valid)
    {
        cout << "impossible\n";
    }
}