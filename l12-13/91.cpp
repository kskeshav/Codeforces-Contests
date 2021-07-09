#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	ll a[n];
	ll sk[n] = {0};
	for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
	if (n == 2*k)
	{
		cout<<1<<" "<<1+k<<endl;
		return 0;
	}
	for (int i = 0; i < k; ++i)
	{
		sk[0]+=a[i];
	}
	for (int i = 1; i <= n-k; ++i)
	{
		sk[i] = sk[i-1]-a[i-1]+a[i+k-1];
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<sk[i]<<" ";
	}
	cout<<endl;
	ll x = 0;
	ll m = 0;
	for (int i = 0; i < n; ++i)
	{
		if (sk[i]>m)
		{
			m = sk[i];
			x = i;
		}
	}
	cout<<x<<endl;
	ll b = 0;
	m = 0;
	for (int i = 0; i < x-k; ++i)
	{
		if (sk[i]>m)
		{
			m = sk[i];
			b = i;
		}
	}
	for (int i = x+k; i < n; ++i)
	{
		if (sk[i]>m)
		{
			m = sk[i];
			b = i;
		}
	}
	cout<<min(x+1,b+1)<<" "<<max(x+1,b+1)<<endl;

	cout<<sk[9]<<" "<<sk[47]<<endl;
	cout<<sk[29]<< " "<<sk[66]<<endl;
	return 0;
}