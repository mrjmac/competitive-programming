#include <bits/stdc++.h>

using namespace std;

int main() 
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    stack<pair<int, int>> stack;
    stack.push(make_pair(0, 0));

    long long ans = 0;
    int start = 0, end = 0, height = 0;

    for (int i = 1; i <= n; i++) 
    {
        cin >> height;

        int currStart = -1;
        while (!stack.empty() && height < stack.top().second) 
        {
            currStart = stack.top().first;
            int height = stack.top().second;
            stack.pop();

            long long garbage = (height) * (long long) (i - currStart);

            if (garbage > ans || (garbage == ans && currStart < start)) 
            {
                ans = garbage;
                start = currStart;
                end = i;
            }
        }

        if (currStart == -1)
        {
            stack.push(make_pair(i, height));
        }
        else
        {
            stack.push(make_pair(currStart, height));
        }
    }

    while (stack.size() > 1) 
    {
        int currStart = stack.top().first;
        int height = stack.top().second;
        stack.pop();

        long long garbage = (height) * (long long) ((n + 1) - currStart);

        if (garbage >= ans) 
        {
            ans = garbage;
            start = currStart;
            end = n + 1;
        }
    }

    cout << start << " " << (end - 1) << " " << ans << "\n";
}
