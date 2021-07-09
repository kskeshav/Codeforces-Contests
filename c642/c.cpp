#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		ll int n,s = 0;
		cin>>n;
		n = int(n/2);
		s = n*(n+1)*(2*n+1)/6;
		s*=8;
		cout<<s<<endl;
	}
	return 0;
}
