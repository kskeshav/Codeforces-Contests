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
		ll x,y,k;
		cin>>x>>y>>k;
		ll t = 0;
		t = k+k*y;
		ll ans = 0;
		ans = t/(x-1);
		if ((ans*(x-1)+1)<t)
		{
			ans+=1;
		}
		else if ((ans*(x-1)+1)>t)
		{
			ans-=1;
		}
		ans+=k;
		cout<<ans<<endl;
	}	
	return 0;
}