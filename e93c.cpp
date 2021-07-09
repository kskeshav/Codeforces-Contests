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
			string ss;
			cin>>ss;
			int a[n];
			int ans = 0;
			for (int i = 0; i < n; ++i)
			{
				a[i] = (int)ss[i]-48;
				// if (a[i] != 1)
				// {
				// 	ans+=1;
				// }
			}
			int s[n] = {0};
			s[0] = a[0];
			for (int i = 1; i < n; ++i)
			{
				s[i]+=s[i-1]+a[i];
				// cout<<s[i]<<" ";
			}
			// cout<<endl;
			for (int i = 0; i < n; ++i)
			{
				if (a[i] >1)
				{
					if (s[i+a[i]-1]-s[i] != 0)
					{
						ans-=1;
					}
					ans-=min(i,n-i)+2;
				}
				else{
					ans+=min(i,n-i)+2;
				}
			}
			// ll x = n*(n+1)/2;
			cout<<ans<<endl;
			// cout<<x-ans<<endl;
		}	
	return 0;
}