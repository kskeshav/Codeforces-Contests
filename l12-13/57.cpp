#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll n,s,t;
	cin>>n>>s>>t;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	if (s == t)
	{
		cout<<0<<endl;
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		s = a[s-1];
		if (s == t)
		{
			cout<<i+1<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}
