#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	ll n,m;
	cin>>n>>m;
	ll a[n+2];
	a[0] = 0;
	for (int i = 1; i < n+1; ++i)
	{
		cin>>a[i];
	}
	ll l = 0;
	ll d = 0;
	ll ans = 0;
	a[n+1] = m;
	for (int i = n+1; i >0; --i)
	{
		if (i%2 == 0)
		{
			d+=a[i]-a[i-1];
		}
		else{
			l+=a[i]-a[i-1];
		}
		ans = max(d,l);
	}
	cout<<ans-1<<endl;
	return 0;
}