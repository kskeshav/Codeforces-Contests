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
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
			sort(a,a+n);
			ll mn = a[0];
			ll ans = 0;
			for (int i = 1; i < n; ++i)
			{
				ll x =k-a[i];
				x/=mn;
				ans+=x;
			}
			cout<<ans<<endl;
		}	
	return 0;
}