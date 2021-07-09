#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int c[100005] = {0};
void dfs(int n,int p){
	visited[n] = 1;
	if (edg[n].size() == 1)
	{
		c[n] = 1;
	}
	for(int u:edg[n]){
		if (visited[u] == 0)
		{
			dfs(u,n);
		}
		else{
			if (u == p)
			{
				c[p] += c[n];
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
		{
			cin>>n;
			vector<int> edg[n];
			for (int i = 0; i < n; ++i)
			{
				int a,b;
				cin>>a>>b;
				edg[a].pb(b);
				edg[b].pb(a);
			}

		}	
	return 0;
}