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
		int n,m;
		cin>>n>>m;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int last = 0;
		for (int i = 0; i < n; ++i)
		{
			if (a[i] != i+1)
			{
				last = max(last,a[i]);
			}
		}
		cout<<last<<endl;
		if (last == 0)
		{
			cout<<1.000000<<endl;
			continue;
		}
		double ans = 0;
		double mul = 1;
		for (int i = 0; i < m; ++i)
		{
			double p,r;
			cin>>r>>p;
			if (r<last)
			{
				continue;
			}
			ans+=p*mul;
			mul *= 1-p;
		}
		cout<<fixed<<setprecision(6)<<ans<<endl;
	}	
	return 0;
}
