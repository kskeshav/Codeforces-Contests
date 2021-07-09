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
			int n;
			cin>>n;
			int a[n];
			int ans = 0;
			int f = 0,f1 = 0,f2 = 0;
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
				if (i>0 && a[i]<a[i-1])
				{
					f1 = 1;
				}
				if (i>0 && a[i]>a[i-1])
				{
					f2 = 1;
				}
			}
			if (f1 == 0 || f2 == 0)
			{
				cout<<0<<endl;
				continue;
			}
			int itr = 0;
			for (int i = 1; i < n-1; ++i)
			{
				if (a[i]<a[i-1])
				{
					f = 1;
					itr = i;
				}
				if (f == 1 && a[i]<a[i+1])
				{
					ans = itr;
					f = 0;
				}
			}
			cout<<ans<<endl;
		}	
	return 0;
}