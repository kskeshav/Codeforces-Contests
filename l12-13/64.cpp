#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll n,m,d = 0;
	cin>>n>>m;
	ll a[n],l[m],b[n],p[100001] = {0};
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>l[i];
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;

	for (int i = n-1;i>-1;i--)
	{
		if (p[a[i]] == 0)
		{
			d+=1;
			p[a[i]] = 1;
		}
		b[i] = d;
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<b[i]<<" ";
	// }
	// cout<<endl;
	for (int i = 0; i < m; ++i)
	{
		cout<<b[l[i]-1]<<endl;
	}
	return 0;
}