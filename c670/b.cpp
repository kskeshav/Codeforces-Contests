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
		ll n;
		cin>>n;
		ll a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		ll ans1 = 0,ans2 = 0,ans3 = 0;
		ans1 = a[0]*a[1]*a[n-1]*a[n-2]*a[n-3];
		ans2 = a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5];
		ans3 = a[0]*a[1]*a[2]*a[3]*a[n-1];
		ll ans = 0;
		ans = max(ans1,ans2);
		ans = max(ans,ans3);
		cout<<ans<<endl;
	}	
	return 0;
}