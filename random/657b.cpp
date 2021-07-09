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
			ll l,r,m;
			cin>>l>>r>>m;
			ll a = 0,b = 0,c = 0;
			for (int j = l; j <= r; ++j)
			{
				a = j;
				ll rem = m%a;
				ll n = m/a;
				if (n == 0)
				{
					n = 1;
				}
				if (a-rem<rem)
				{
					n+=1;
				}
				rem = min(rem,a-rem);
				if (n*a>m)
				{
					rem = n*a-m;
					if (l+rem<=r)
					{
						c = r;
						b = r-rem;
						break;
					}
				}
				else {
					if (l+rem<=r)
					{
						b = r;
						c = r-rem;
						break;
					}
				}
			}
			cout<<a<<" "<<b<<" "<<c<<endl;
		}	
	return 0;
}