#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	vector<pair<ll,ll>> v;
	ll n,d;
	cin>>n>>d;
	for (int i = 0; i < n; ++i)
	{
		ll a,b;
		cin>>a>>b;
		v.pb(pair<ll,ll> (a,b));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; ++i)
	{
		
	}
	return 0;
}