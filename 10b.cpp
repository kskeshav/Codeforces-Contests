#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		vector<ll> d;
		d.pb(a[n-1]);
		ll cd = a[n-1];
		for (int i = 0; i < k; ++i)
		{
			d.pb()
		}
	}	
	return 0;
}