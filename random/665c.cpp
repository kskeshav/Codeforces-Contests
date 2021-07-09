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
		ll a[n];
		ll b[n];
		cin>>a[0];
		b[0] = a[0];
		ll f = 0,ind = 0,mn = a[0];
		for (int i = 1; i < n; ++i)
		{
			cin>>a[i];
			b[i] = a[i];
			mn = min(mn,a[i]);
			if (a[i]<a[i-1])
			{

				f = 1;
			}
		}
		sort(b,b+n);
		if (f== 0)
		{
			cout<<"YES"<<endl;
		}
		else{
			f = 0;
			for (int i = 0; i < n; ++i)
			{
				if (a[i]%mn != 0 && b[i] != a[i])
				{
					f = 1;
				}
			}
			if (f == 1)
			{
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
	}
	return 0;
}