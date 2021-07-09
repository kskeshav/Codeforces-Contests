#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll x,y,n,N;
	N = 1e9+7;
	cin>>x>>y;
	cin>>n;
	ll a[10];
	a[0] = x;
	a[1] = y;
	for (int i = 2; i < 6; ++i)
	{
		a[i] = a[i-1]-a[i-2];
	}
	n = n%6-1;
	if (n ==-1)
	{
		n = 5;
	}
	ll ans = a[n];
	ans = (N+ans%N)%N;
	cout<<ans<<endl;
	return 0;
}