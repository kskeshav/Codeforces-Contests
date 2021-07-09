#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	ll n,ans = 0;
	cin>>n;
	int a[n],b[n],d[n+1],f[n+1] = {0};
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}	
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}
	if (n == 2)
	{
		cout<<2<<endl;
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		d[a[i]] = i;
	}
	for (int i = 0; i < n; ++i)
	{
		d[b[i]] -=i;
	}
	for (int i = 1; i < n+1; ++i)
	{
		if (d[i] == -(n-1))
		{
			d[i] = 1;
		}
		if (d[i] == n-1)
		{
			d[i] = -1;
		}
		f[d[i]]++;
	}
	for (int i = 0; i < n-1; ++i)
	{
		if (ans<f[i])
		{
			ans = f[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}