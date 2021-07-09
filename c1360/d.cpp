#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		ll n,k,ans = 0;
		cin>>n>>k;
		ll nn = sqrt(n);
		for (int i = 1; i <=min(nn,k); i++)
		{
			if (n%i == 0)
			{
				if (n/i<=k)
				{
					ans = i;
					break;
				}
				else{
					ans = n/i;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}