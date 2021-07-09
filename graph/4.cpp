#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
vector<int> edg[100005];
int main(int argc, char const *argv[])
{
	int n,m,c1 = 0,c2 =0,c3 = 0;
	cin>>n>>m;
	for (int i = 0; i < m; ++i)
	{
		int x,y;
		cin>>x>>y;
		edg[x].pb(y);
		edg[y].pb(x);
	}	
	for (int i = 0; i < n+1; ++i)
	{
		if (edg[i].size() == 1){
			c1+=1;
		}
		if (edg[i].size() == 2)
		{
			c2+=1;
		}
		if (edg[i].size() == n-1)
		{
			c3+=1;
		}
	}
	if (c1 == 2 && c2 == n-2)
	{
		cout<<"bus topology"<<endl;
		return 0;
	}
	if (c1 == 0 && c2 == n)
	{
		cout<<"ring topology"<<endl;
		return 0;
	}
	if (c1 == n-1 && c3 == 1)
	{
		cout<<"star topology"<<endl;
		return 0;
	}
	else{
		cout<<"unknown topology"<<endl;

	}
	return 0;
}