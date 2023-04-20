#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int x = 0;
	int y = 0;
	for (int i = 0; i < s.length(); i++)
	{
		int counter = 1;
		int value = 0;
		int j = i + 1;
		while (s[i] == s[j])
		{
			counter += 1;
			j += 1;
		}
		if (counter > 2)
		{
			value = 20 + (counter - 3) * 5;
		}
		else
		{
			value = counter * 2;
		}

		if (s[i] == '>')
		{
			x += value;
		}
		if (s[i] == '<')
		{
			x -= value;
		}
		if (s[i] == '^')
		{
			y += value;
		}
		if (s[i] == 'v')
		{
			y -= value;
		}
		i += counter - 1;
	}
	cout<<"("<<x<<","<<y<<")"<<endl;
}