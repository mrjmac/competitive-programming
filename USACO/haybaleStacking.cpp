#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    vector<int> stack(n);
    stack[0] = 0;

    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;

        stack[a - 1]++;
        stack[b]--;
    }

    for (int i = 1; i < n; i++)
    {
        stack[i] += stack[i - 1];
    }

    sort(stack.begin(), stack.end());    

    cout << stack[n / 2] << "\n";
}