#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    
    vector<int> petals(n);
    for (int i = 0; i < n; i++)
    {
        cin >> petals[i];
    }

    
    int photos = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int totalPetals = 0;
            for (int k = i; k <= j; k++)
            {
                totalPetals += petals[k];
            }

            bool there = false;
            for (int k = i; k <= j; k++)
            {
                if(petals[k] * (j - i + 1) == totalPetals)
                {
                    there = true;
                }
            }

            if (there)
            {
                photos += 1;
            }
        }
    }
    
    
    cout << photos << "\n";
}