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
			int f[n] = {0};
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
			sort(a,a+n);
			reverse(a,a+n);
			int x = a[0];
			int g = 0;
			int pn = 0;
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{		
					if (__gcd(x,a[j])>g && f[j] == 0)
					{
						g = __gcd(x,a[j]);
						pn = j;
					}
				}
				cout<<a[pn]<<" ";
				f[pn] = 1;
				x = g;
				g = 0;
			}
			cout<<endl;
		}	
	return 0;
}