#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll n,m,add = 0;
	cin>>n>>m;
	ll a[n];	
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < m; ++i)
	{
		ll q;
		cin>>q;
		if (q == 1)
		{
			ll v,x;
			cin>>v>>x;
			a[v-1] = x-add;;
		}
		if (q == 2)
		{
			ll y;
			cin>>y;
			add+=y;
		}
		if (q == 3)
		{
			ll z;
			cin>>z;
			cout<<a[z-1]+add<<endl;
		}
	}
	return 0;
}