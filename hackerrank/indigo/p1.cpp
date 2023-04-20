#include <bits/stdc++.h>

using namespace std;
#define ll long long
bool compare(string &s1, string &s2)
{
    if (s1.size() > s2.size())
    {
        return true;
    }
    else if (s2.size () > s1.size())
    {
        return false;
    }
    else
    {
        if (s1.compare(s2) < 0)
        {
            return true;
        }
        return false;
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    ll n;
    cin >> n;

    vector<string> words(n);
    vector<string> answers(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    for (ll i = 0; i < n; i++)
    {
        string ans = "";
        int count = 0;
        for (int j = 0; j < (int) words[i].length(); j++)
        {
            if (words[i][j] == 'y')
            {
                count += 1;
            }
            else if (words[i][j] != 'x')
            {
                ans += words[i][j];
            }
        }

        for (ll j = 0; j < count; j++)
        {
            ans += 'y';
        }

        answers[i] = ans;
    }

    sort(answers.begin(), answers.end(), compare);

    for (ll i = 0; i < n; i++)
    {
        cout << answers[i] << "\n";
    }
}