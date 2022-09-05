#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int num;
    cin >> num;

    if (num == 3 || num == 2)
    {
        cout << "NO SOLUTION" << "\n";
    }
    else
    {
        for (int i = 2; i <= num; i += 2)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= num; i += 2)
        {
            cout << i << " ";
        }
    }
}