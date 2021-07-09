#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	ll t;
	cin>>t;
	for (int j = 0; j < t; ++j)
		{
			ll n,sum_req = 0;
			cin>>n;
			ll a[n],b[n],req[n];
			cin>>a[0]>>b[0];
			ll ans = 1e18;
			for (ll i = 1; i < n; ++i)
			{
				cin>>a[i]>>b[i];
				if (a[i]<=b[i-1])
				{
					req[i-1] = 0;
				}
				else{
					req[i-1] = a[i]-b[i-1];
					sum_req += req[i-1];
				}
				if (a[i]-req[i-1]<ans)
				{
					ans = a[i]-req[i-1];
				}
			}
			if (a[0]<=b[n-1])
			{
				req[n-1] = 0;
			}
			else{
				req[n-1] = a[0]-b[n-1];
				sum_req += req[n-1];
			}
			ans = min(a[0]-req[n-1],ans);
			ans+=sum_req;
			cout<<ans<<endl;
		}	
	return 0;
}