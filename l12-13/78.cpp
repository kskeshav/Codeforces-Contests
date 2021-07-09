#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n,k,m;
	cin>>n>>k>>m;
	ll a[n];
	ll s[n-m+1] = {0};
	ll ans = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for (int i = 0; i < m; ++i)
	{
		s[0]+=a[i];
	}
	for (int i = 1; i < n-m+1; ++i)
	{
		s[i] = s[i-1]-a[i-1]+a[i+m-1];
	}
	for (int i = 0; i < n-m+1; ++i)
	{
		cout<<s[i]<<" ";
	}
	cout<<endl;
	sort(s,s+n-m+1);
	
	int nn = n-m+1;
	for (int i = 0; i < k; ++i)
	{
		ans+=s[nn-1-i];
	}
	cout<<ans<<endl;
	return 0;
}


