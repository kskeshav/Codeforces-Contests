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
			ll ans = 0;
			map<ll,ll> m;
			ll mm = 0,ind = 0;
			int f = 0;
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
				ll x = k-a[i]%k;
				if (x!= k)
				{
					m[x]++;
				}
				
			}
			for (int i = 0; i < n; ++i)
			{
				if (a[i]%k != 0)
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				cout<<0<<endl;
				continue;
			}
			for( map<ll,ll>::iterator ii=m.begin(); ii!=m.end(); ++ii)  
		  	{  
		  		if ((*ii).first != 0 && (*ii).second>=mm)
		  		{
		  			mm = (*ii).second;
		  			ind = (*ii).first;
		  		}  
		  	}
			cout<<k*(mm-1)+ind+1<<endl;
		}	
	return 0;
}