#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		ll int n,m;
		cin>>n>>m;
		if (n == 1)
		{
			cout<<0<<endl;
			continue;
		}
		if (n == 2)
		{
			cout<<m<<endl;
			continue;
		}
		cout<<2*m<<endl;	
	}
	return 0;
}