#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	ll x[n];
	ll h[n];
	if (n == 1)
	{
		cout<<1<<endl;
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		ll a,b;
		cin>>a>>b;
		x[i] = a;
		h[i] = b;
	}
	int ans = 0;
	for (int i = 1; i < n-1; ++i)
	{
		if (x[i-1]<x[i]-h[i])
		{
			ans++;
		}
		else{

			if (x[i+1]>x[i]+h[i])
			{
				ans++;
				x[i]+=h[i];
			}
		}
	}
	cout<<ans+2<<endl;
	return 0;
}