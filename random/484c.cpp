#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int itr = 0;
int visited[100000] = {0};
vector<int> edg[100000];
int f[100000] = {0};
void dfs(int n){
	visited[n] = 1;
	f[itr]++;
	for (int u:edg[n])
	{
		if (!visited[u])
		{
			dfs(u);
		}
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int ans = 0;
	for (int i = 0; i < n-1; ++i)
	{
		int u,v;
		cin>>u>>v;
		edg[u].pb(v);
		edg[v].pb(u);

	}
	for (int i = 1; i <= n; ++i)
	{
		if (!visited[i])
		{
			itr++;
			dfs(i);
		}
	}
	for (int i = 0; i < 100000; ++i)
	{
		if (f[i]%2)
		{
			cout<<-1<<endl;
			return 0;
		}
		if (f[i] != 0)
		{
			ans+=f[i]/2-1;
		}	
	}
	cout<<ans<<endl;
	return 0;
}