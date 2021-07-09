#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
		{
			double n,m;
			cin>>n>>m;
			ll x =ceil(m*n/2); 
			cout<<x<<endl;
		}	
	return 0;
}