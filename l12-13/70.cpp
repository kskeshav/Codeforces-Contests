#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	ll a[n];
	ll c = 0;
	ll p[n+1] = {0};
	ll itr = 1;
	for (ll i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for (ll i = 0; i < n; ++i)
	{
		c+=(abs(i+1-a[i]));
	}
	cout<<c<<endl;
	return 0;
}