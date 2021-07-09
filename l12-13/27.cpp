#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll int s,n;
	cin>>s>>n;
	multimap <ll,ll> d;
	for (int i = 0; i < n; ++i)
	{
		ll x,y;
		cin>>x>>y;
		d.insert(pair<ll,ll>(x,y));
	}
	for (auto i:d)
	{
		if (s>i.first)
		{
			s+=i.second;
		}
		else{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}