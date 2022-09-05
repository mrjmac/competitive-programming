#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string a;
    cin >> a;
    int oddCount = 0;
    int oddInd = 100;

    vector<int> freq(26);
    
    for(char c : a)
    {
        freq[c - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            oddCount += 1;
            oddInd = i;
        }
    }
    if (oddCount > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    else
    {
        for(int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 == 0)
            {
                for (int j = 0; j < freq[i] / 2; j++)
                {
                    cout << (char)(i + 'A');
                }
            } 
        }
        if (oddInd != 100)
        {
            for (int i = 0; i < freq[oddInd]; i++)
            {
                cout << (char)(oddInd + 'A');
            }
        }
        for (int i = 25; i >= 0; i--)
        {
            if (freq[i] % 2 == 0)
            {
                for (int j = 0; j < freq[i] / 2; j++)
                {
                    cout << (char)(i + 'A');
                }
            }
        }
    }

    
    return 0;
}