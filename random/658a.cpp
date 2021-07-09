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
	int n,m;
	cin>>n>>m;
	int c[1005] = {0};
	for (int i = 0; i < n; ++i)
		{
			int e;
			cin>>e;
			c[e] = 1;
		}	
	int f = 0;
	for (int i = 0; i < m; ++i)
	{
		int e;
		cin>>e;
		if (c[e] == 1 && f == 0)
		{
			cout<<"YES"<<endl;
			cout<<1<<" "<<e<<endl;
			f = 1;
		}
	}
	if (f == 0)
	{
		cout<<"NO"<<endl;
	}
}
	return 0;
}