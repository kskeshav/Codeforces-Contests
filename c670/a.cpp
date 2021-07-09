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
		ll n;
		cin>>n;
		int a[n];
		int c[105] = {0};
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			c[a[i]]++;
		}
		int f1 = 0,ans = 0;
		for (int i = 0; i <= 100; ++i)
		{
			if (c[i] == 1 && f1 == 0)
			{
				ans+=i;
				f1 = 1;
			}
			if (c[i] == 0)
			{
				if(f1 == 1){
					ans+=i;
					break;
				}
				else{
					ans+=2*i;
					break;
				}
			}
		}
		cout<<ans<<endl;
	}	
	return 0;
}