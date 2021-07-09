#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int visited[100005] = {0};
vector<int> edg[100005];
int nc[100005] = {0};
void dfs(int n){
	visited[n] = 1;
	int ans = edg[n].size();
	cout<<ans<<endl;
	for(int u:edg[n]){
		ans+=edg[u].size()-1;
		cout<<ans<<endl;
		if (visited[u] == 0)
		{
			dfs(u);
		}
	}
	nc[n] = ans;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
		{
			nc[100005] = {0};
			int n;
			cin>>n;
			for (int i = 0; i < n; ++i)
			{
				edg[i].clear();
			}
			for (int i = 0; i < n-1; ++i)
			{
				int a,b;
				cin>>a>>b;
				edg[a].pb(b);
				edg[b].pb(a);
			}
			dfs(1);
			int mc = 0,ind = 0;
			for (int i = 0; i < n+1; ++i)
			{
				if (nc[i]>mc)
				{
					mc = nc[i];
					ind = i;
				}
			}
			mc = 0;
			int ind2 = 0;
			for (int i = 0; i < n+1; ++i)
			{
				if (i!= ind)
				{
					if (nc[i]>mc)
					{
						mc = nc[i];
						ind2 = i;
					}
				}
			}
			for (int i = 0; i < n; ++i)
			{
				cout<<nc[i]<<endl;
			}
			if (nc[ind] == nc[ind2])
			{
				if (edg[ind][0] == ind2)
				{
					cout<<edg[ind][1]<<" "<<ind<<endl;
					cout<<edg[ind][1]<<" "<<ind2<<endl;
				}
				else{
					cout<<edg[ind][0]<<" "<<ind<<endl;
					cout<<edg[ind][0]<<" "<<ind2<<endl;
				}
			}
			else{
				cout<<edg[ind][0]<<" "<<ind<<endl;
				cout<<edg[ind][0]<<" "<<ind<<endl;
			}
		}	
	return 0;
}