#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	ll pd = 0;
	ll d = 0;
	ll ans = n;
	vector<ll> a;
	a.pb(0);
	for (ll i = 2; i <= sqrt(n); ++i)
	{
		if (n%i == 0)
		{
			a.pb(i);
			if (i*i != n)
			{
				a.pb(n/i);	
			}
		}
	}
	ll x = a.size();
	sort(a.begin(),a.end());
	for (ll i = 1; i <x; ++i)
	{
		cout<<a[i]<<" ";
		if (a[i]-a[i-1]<ans)
		{
			ans = a[i]-a[i-1];
		}
	}
	cout<<endl<<ans<<endl;
	return 0;
}