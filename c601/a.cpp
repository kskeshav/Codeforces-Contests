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
			ll a,b;
			cin>>a>>b;
			ll x = abs(a-b);
			ll ans = x/5;
			x = x%5;
			ans+= x/2;
			ans+=x%2;
			cout<<ans<<endl;
		}	
	return 0;
}