#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pi M_PI
int main() {
	ll x;
	cin>>x;

	string pe = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266";
	for (int i = 0; i < x; i++)
	{
		string input;
		cin>>input;
		ll a[input.length()] = {};
		for (ll j = 0; j < input.length(); j++)
		{
			a[j] = input[j];
		}
		ll count = 0;
		long double val = pi;
		ll j = 0;
		while ((input[j]) == pe[j])
		{
			count += 1;
			j += 1;
		}
		cout<<count<<endl;
	}
}