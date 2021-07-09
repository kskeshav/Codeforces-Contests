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
			int n;
			cin>>n;
			ll a[n],b[n];
			ll ma = 1e9+5,mb = 1e9+5,ans = 0;
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
				ma = min(ma,a[i]);
			}
			for (int i = 0; i < n; ++i)
			{
				cin>>b[i];
				mb = min(mb,b[i]);
			}
			for (int i = 0; i < n; ++i)
			{
				ans+=max(a[i]-ma,b[i]-mb);
			}
			cout<<ans<<endl;
		}	
	return 0;
}