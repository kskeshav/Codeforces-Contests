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
			ll nn = 0;
			ll s = 0;
			ll mx = 0;
			ll mn = 1e9+5;
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
				if (a[i] != -1)
				{
					mx = max(mx,a[i]);
					mn = min(mn,a[i]);
				}
			}
			ll k = 0;
			if (nn == 0)
			{
				k = 1;
			}
			else{
				k = s/nn;
			}
			ll m = 0;
			if (a[0] == -1)
			{
				a[0] = k;
			}
			for (int i = 1; i < n; ++i)
			{
				if (a[i] == -1)
				{
					a[i] = k;
				}
				m = max(m,abs(a[i]-a[i-1]));
			}
			cout<<m<<" "<<k<<endl;
		}	
	return 0;
}