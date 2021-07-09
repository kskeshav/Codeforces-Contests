#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	ll a2[31] = {0};
	a2[0] = 1;
	for (int i = 1; i < 31; ++i)
	{
		a2[i] = a2[i-1]*2;
	}
	
	for (int i = 0; i < t; ++i)
	{
		int n;
		cin>>n;
		ll a[n];
		ll c[31] = {0};
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			int a2 = log2(a[i]);
			c[a2]++;
		}
		ll ans = 0;
		for (int i = 0; i < 31; ++i)
		{
			ans+=c[i]*(c[i]-1)/2;
		}
		cout<<ans<<endl;
	}	
	return 0;
}