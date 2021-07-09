#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	ll a[n];
	ll ans = 1;
	ll m = 0;
	ll ind = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if (m<a[i])
		{
			m = a[i];
			ind = i;
		}
		if (a[i]>0)
		{
			a[i] = -a[i]-1;
		}
	}
	if (n%2 != 0)
	{
		if (a[ind != 0])
		{
			a[ind] = -a[ind]-1;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}