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
			ll x = min(a,b);
			ll y = max(a,b);
			if ((x+y)%3 == 0 && 2*x>=y)
			{
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}	
	return 0;
}