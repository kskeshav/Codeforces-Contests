#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll n,x,y;
	cin>>n>>x>>y;
	ll t = ceil(n*y/100.0);
	ll m = 0;
	cout<<max(m,t-x)<<endl;
	return 0;
}