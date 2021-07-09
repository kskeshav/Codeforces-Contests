#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	ll v[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	ll m,u[n];
	cin>>m;
	for (int i = 0; i < n; ++i)
	{
		u[i] = v[i];
	}
	sort(u,u+n);
	for (int i = 1; i < n; ++i)
	{
		v[i]+=v[i-1];
		u[i]+=u[i-1];
	}
	for (int j = 0; j < m; ++j)
	{
		ll q,l,r;
		cin>>q>>l>>r;
		if (q == 1)
		{
			if (l == 1)
			{
				cout<<v[r-1]<<endl;
				continue;
			}
			cout<<v[r-1]-v[l-2]<<endl;
		}
		else{
			if (l == 1)
			{
				cout<<u[r-1]<<endl;
				continue;
			}
			cout<<u[r-1]-u[l-2]<<endl;
		}
	}
	return 0;
}
