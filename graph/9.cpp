#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int order[200005];
bool compare(int a,int b){
	return order[a]<order[b];
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int> edg[n+1];
	for (int i = 0; i < n-1; ++i)
		{
			int x,y;
			cin>>x>>y;
			edg[x].pb(y);
			edg[y].pb(x);
		}	
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		order[a[i]] = i;
	}
	for (int i = 0; i < n+1; ++i)
	{
		sort(edg[i].begin(),edg[i].end(),compare);
	}
	bool v[n+1];
	memset(v,false,sizeof v);
	v[1] = true;
	queue<int> q;
	q.push(1);
	vector<int> ans;
	while(!q.empty()){
		int s = q.front();
		q.pop();
		ans.pb(s);
		for (auto u:edg[s])
		{
			if (v[u])
			{
				continue;
			}
			v[u] = true;
			q.push(u);
		}

	}
	for (int i = 0; i < n-1; ++i)
	{
		if (ans[i] != a[i])
		{
			cout<<"no"<<endl;
			return 0;

		}
	}
	cout<<"yes"<<endl;
	return 0;
}