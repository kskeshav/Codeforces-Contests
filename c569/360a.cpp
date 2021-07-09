#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
vector<int> edg[100005];
int team[100005];
int visited[100005];
int f = 0;
void dfs(int n){
	visited[n] = 1;
	for(int u:edg[n]){
		if (!visited[u])
		{
			team[u] = 1-team[n];
			dfs(u);
		}
		else{
			if (team[u] != 1-team[n])
			{
				f = 1;
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	int n,m,n2 = 0,n1 = 0;
	cin>>n>>m;
	for (int i = 0; i < m; ++i)
		{
			int a,b;
			cin>>a>>b;
			visited[a] = 0;
			visited[b] = 0;
			edg[a].pb(b);
			edg[b].pb(a);
		}	
	for (int i = 1; i < n+1; ++i)
	{
		if (!visited[i])
		{
			team[i] = 0;
			dfs(i);
		}
	}
	if (f == 1)
	{
		cout<<-1<<endl;
		return 0;
	}
	for (int i = 1; i < n+1; ++i)
	{
		if (team[i] == 0)
		{
			n1++;
		}
		else{
			n2++;
		}
	}
	cout<<n1<<endl;
	for (int i = 1; i < n+1; ++i)
	{
		if (team[i] == 0)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl<<n2<<endl;
	for (int i = 0; i < n+1; ++i)
	{
		if (team[i] == 1)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}