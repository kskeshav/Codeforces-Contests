#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
vector<int> edg[200000];
int d[200005];
int visited[200005] = {0};
int subtract[200005] = {1};
void dfs(int n,int p){
	visited[n] = 1;
	subtract[n] = 1;
	for(int u:edg[n]){
		if (u == p)
		{
			subtract[u]+=subtract[n];
		}
		if (!visited[u])
		{
			d[u] = d[n]+1;
			dfs(u,n);
		}
	}

}
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	for (int i = 0; i < n-1; ++i)
		{
			int a,b;
			cin>>a>>b;
			edg[a].pb(b);
			edg[b].pb(a);
		}	
	d[1] = 0;
	dfs(1,-1);
	int f[n+1] = {0};
	for (int i = 1; i <= n; ++i)
	{
		cout<<d[i]<<" "<<subtract[i]<<endl;
	}
	for (int i = 1; i <= n; ++i)
	{
		f[i] = d[i]-subtract[i]+1;
	}
	sort(f,f+n+1);
	for (int i = 0; i <= n; ++i)
	{
		cout<<f[i]<<" ";
	}
	cout<<endl;
	ll ans = 0;
	for (int i = 0; i < k; ++i)
	{
		ans+=f[n-i];
	}
	cout<<ans<<endl;
	return 0;
}