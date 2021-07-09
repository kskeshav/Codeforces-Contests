#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int c[100005];
vector<int> edg[100005];
bool v[100005];
void dfs(int n,int m){
	v[n] = true;

	for(int u:edg[n]){
		if (v[u])
		{
			continue;
		}
		v[u] = true;
		if (c[u] || edg[u].size() == 1 || c[n]>m)
		{
			c[u] +=c[n];
		}
		else{
			c[u] = 0;
		}
		dfs(u,m);
	}
}
int main(int argc, char const *argv[])
{
	int n,m,ans = 0;
	cin>>n>>m;
	memset(v,false,sizeof(v));

	for (int i = 1; i < n+1; ++i)
	{
		cin>>c[i];
	}
	for (int i = 0; i < n-1; ++i)
	{
		int a,b;
		cin>>a>>b;
		edg[a].pb(b);
		edg[b].pb(a);
	}
	dfs(1,m);
	for (int i = 2; i < n+1; ++i)
	{
		if (edg[i].size() == 1 && c[i]<=m)
		{
			ans+=1;
		}
	}
	cout<<ans<<endl;
	return 0;
}