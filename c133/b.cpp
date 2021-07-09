#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int ans, team[150], n, m;
vector<int> edg[150];

void dfs(int n, int c)
{
    team[n] = c;
    for(int v : edg[n])
    {
        if(team[v] != -1) ans += team[v] != 1-c;
        else dfs(v,1-c);
    }
}
 
int main()
{
	cin>>n>>m;
	for(int i = 0;i<m;i++)
	{
	int a,b;
	cin>>a>>b;
	edg[a].pb(b), edg[b].pb(a);
	}
	for (int i = 0; i < n+1; ++i)
	{
		team[i] = -1;
	}
	dfs(1,0);
	for (int i = 0; i < n; ++i)
	{
		if(team[i] == -1) dfs(i,0);
	}
	if((n-ans/2)&1){
		cout<<ans/2+1<<endl;
	}
	else {
		cout<<ans/2<<endl;
	}
	return 0;
}