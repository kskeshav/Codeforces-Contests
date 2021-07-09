#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
vector<int> edg[500005];
void dfs_q1(int a,int b,int g1,int g2){
	if (a == b)
	{
		ans = 1;
	}
	else{
		if (!visited[a])
		{
			visited[a] = 1;	
		}
	}
}
int main(int argc, char const *argv[])
{
	int n,e;
	cin>>n>>e;
	for (int i = 0; i < e; ++i)
		{
			int a,b;
			cin>>a>>b;
			edg[a].pb(b);
			edg[b].pb(a);
		}	
	int q;
	cin>>q;
	for (int i = 0; i < q; ++i)
	{
		int query;
		cin>>query;
		if (query == 1)
		{
			int a,b,g1,g2;
			cin>>a>>b>>g1>>g2;
		}
	}
	return 0;
}