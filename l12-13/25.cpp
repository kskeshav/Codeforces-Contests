#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll int n,m,s = 0;
	cin>>n>>m;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for (int i = 0; i < m; ++i)
	{
		if (a[i]<0)
		{
			s-=a[i];
		}
	}
	cout<<s<<endl;
	return 0;
}
