#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n,m,s,t;
	cin>>n>>m>>s>>t;
	vector<int> edg[n+1];
	for (int i = 0; i < m; ++i)
	{
		int a,b;
		cin>>a>>b;
		edg[a].pb(b);
		edg[b].pb(a);

	}	
	queue<int> q;
	vector<bool> used(n+2);
	vector<int> d(n+2), p(n+2);
	q.push(s);
	used[s] = true;
	p[s] = -1;
	while (!q.empty()) {
	    int v = q.front();
	    q.pop();
	    for (int u : edg[v]) {
	        if (!used[u]) {
	            used[u] = true;
	            q.push(u);
	            d[u] = d[v] + 1;
	            p[u] = v;
	        }
	    }
	}
	int ans = n*(n-1)/2-m-(d[t]*(d[t]-1)/2);
	cout<<ans<<endl;
	return 0;
}