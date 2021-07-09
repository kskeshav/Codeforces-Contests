#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
vector<int> edg[100005];
ll p[100005] = {0};
ll h[100005] = {0};
int f = 0;
void dfs(int parent,int n){
	int happy = p[n]+h[n];
	int c = 0;
	for(int u:edg[n]){
		if (u != parent)
		{
			c+=h[u];
			dfs(n,u);
		}
	}
	if (c>happy)
	{
		f = 1;
	}
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n,m;
		cin>>n>>m;
		f = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>p[i+1];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>h[i+1];
		}
		for (int i = 0; i < n-1; ++i)
		{
			int x,y;
			cin>>x>>y;
			edg[x].pb(y);
			edg[y].pb(x);
		}
		for (int i = 1; i <= n; ++i)
		{
			if (edg[i].size() == 1)
			{
				if ((p[i]-abs(h[i]))%2 == 1)
				{
					f = 1;
				}
			}
		}
		dfs(-1,1);
		if (f == 1)
		{
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
		for (ll i = 1; i <= n; i++)
            edg[i].clear();
	}
	return 0;
}