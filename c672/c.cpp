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
			int an,q;
			cin>>an>>q;
			int a[an];
			int mx = 0;	
			for (int i = 0; i < an; ++i)
			{
				cin>>a[i];
				mx = max(mx,a[i]);
			}
			int f = 0;
			vector<int> lmx;
			vector<int> lmn;
			for (int i = 1; i < an-1; ++i)
			{
				if (a[i]>a[i-1] && a[i]>a[i+1])
				{
					f = 1;
					lmx.pb(a[i]);
				}
				if (a[i]<a[i-1] && a[i]<a[i+1] && f == 1)
				{
					f = 0;
					lmn.pb(a[i]);
				}
			}
			int n1 = lmn.size();
			int n2 = lmx.size();
			int n = min(n1,n2);
			int ans = 0;
			for (int i = 0; i < n; ++i)
			{
				ans+=lmx[i]-lmn[i];
			}
			if (n1<n2)
			{
				ans+=lmx[n];
			}
			else{
				ans+=a[an-1];
			}
			if (ans == 0)
			{
				ans = mx;
			}
			cout<<ans<<endl;
		}	
	return 0;
}