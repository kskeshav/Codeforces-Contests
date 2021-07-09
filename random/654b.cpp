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
			ll n,r;
			cin>>n>>r;
			ll ans = 1;
			ll itr = n-1;
			for (int i = 0; i < min(n,r); ++i)
			{
				ans+=itr;
				itr--;
			}
			cout<<ans<<endl;
		}	
	return 0;
}