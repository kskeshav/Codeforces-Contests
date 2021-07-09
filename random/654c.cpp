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
			ll a,b,n,m;
			cin>>a>>b>>n>>m;
			ll x = min(a,b);
			if (x<m || (a+b)<(n+m))
			{
				cout<<"No"<<endl;
			}
			else{
				cout<<"Yes"<<endl;
			}
		}	
	return 0;
}