#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num == 3 || num == 2)
    {
        cout << "NO SOLUTION" << endl;
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