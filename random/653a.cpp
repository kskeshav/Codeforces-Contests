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
			ll x,y,n;
			cin>>x>>y>>n;
			if (n%x <y)
			{
				ll d = n/x -1;
				cout<<x*d+y<<endl;
			}
			else{
				ll d = n/x;
				cout<<x*d+y<<endl;
			}
		}	
	return 0;
}