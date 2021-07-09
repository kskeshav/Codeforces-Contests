#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int c[n+1] = {0};
	int visited[n+1] = {0};
	vector<int> adj[n+1];
	for (int i = 0; i < n-2; ++i)
		{
			int q1,q2,q3;
			cin>>q1>>q2>>q3;
			c[q1]+=1;
			c[q2]+=1;
			c[q3]+=1;
			adj[q1].pb(q2);
			adj[q1].pb(q3);
			adj[q2].pb(q3);
			adj[q2].pb(q1);
			adj[q3].pb(q1);
			adj[q3].pb(q2);
		}
	vector<int> a;
	for (int i = 1; i < n+1; ++i)
	{
		if (c[i] == 1)
		{
			a.pb(i);
			visited[i] = 1;
			break;
		}
	}
	if (c[adj[a[0]][0]] == 2)
	{
		a.pb(adj[a[0]][0]);
		a.pb(adj[a[0]][1]);
	}
	else{
		a.pb(adj[a[0]][1]);
		a.pb(adj[a[0]][0]);
	}

	visited[adj[a[0]][0]] = 1;
	visited[adj[a[0]][1]] = 1;
	for (int i = 1; i < n; ++i)
	{
		for(int u:adj[a[i]]){
			if (!visited[u])
			{
				a.pb(u);
				visited[u] = 1;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}