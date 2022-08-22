#include <bits/stdc++.h>

using namespace std;

bool simulate(int arr[])
{
    int total = 0;
    for (int i = 1; i <= 100; i++)
    {
        int pos = arr[i];
        for(int j = 0; j < 50; j++)
        {
            if (arr[pos] == i)
            {
                total += 1;
                break;
            }
            pos = arr[pos];
        }

    }
    if (total < 100)
    {
        return false;
    }
    return true;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int a[101];
    int totalTrue = 0;
    int totalFalse = 0;

    for (int i = 1; i <= 100; i++)
    {
        a[i] = i;
    }
    for (int i = 0; i < 100; i++)
    {
        random_shuffle(begin(a), end(a));
        if (simulate(a))
        {
            totalTrue += 1;
        }
        else
        {
            totalFalse += 1;
        }
    }

    cout << totalTrue / (double)(totalFalse + totalTrue) << "\n";
}