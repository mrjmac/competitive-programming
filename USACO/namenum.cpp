/*
ID: john38
TASK: namenum
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

vector<string> names;
vector<string> encNames;

void encode(string orig)
{
    string n = "";
    for (int i = 0; i < (int) orig.size(); i++)
    {
        int curr = orig[i] - 'A';

        if (curr >= 16)
        {
            curr--;
        }

        curr /= 3;
        curr += 2;
        n += curr + '0';
    }

    names.push_back(orig);
    encNames.push_back(n);
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ofstream out("namenum.out");
    ifstream in("namenum.in");
    ifstream dict("dict.txt");

    string serial;
    in >> serial;
    
    string curr;
    while (dict >> curr)
    {    
        encode(curr);
    }

    bool done = false;
    for (int i = 0; i < (int) names.size(); i++)
    {
        if (serial == encNames[i])
        {
            out << names[i] << "\n";
            done = true;
        }
    }

    if (!done)
    {
        out << "NONE\n";
    }
}