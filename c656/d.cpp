#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
string s;
ll rec(ll l,ll r,ll alp){
	if (l == r)
	{
		return 0;
	}
	if (l == r-1)
	{
		if (s[l] == alp)
		{
			return 0;
		}
		return 1;
	}
	ll m = (r-l)/2+l;
	ll c1 = 0,c2 = 0;
	for (ll i = l; i < m; ++i)
	{
		if (s[i] == alp)
		{
			c1+=1;
		}

	}
	for (ll i = m; i < r; ++i)
	{
		if (s[i] == alp)
		{
			c2+=1;
		}
	}
	ll ans = 0;
	ll ans1 = rec(l,m,alp+1);
	ll ans2 = rec(m,r,alp+1);
	ans1+=m-l-c2;
	ans2+=m-l-c1;
	ans+=min(ans1,ans2);
	return ans;
}
int main(int argc, char const *argv[])
{
	ll t;
	cin>>t;
	for (int i = 0; i < t; ++i)
		{
			ll n;
			cin>>n;
			cin>>s;
			ll ans = 0;
			ans = rec(0,n,97);
			cout<<ans<<endl;
		}	
	return 0;
}