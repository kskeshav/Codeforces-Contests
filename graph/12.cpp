#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int visited[51][51] = {0};
int n,m;
void dfs(int i,int j){
	if(i<n && j<m){
		visited[i][j] = 1;
		if (!visited[i+1][j])
		{
			visited[i+1][j] = 1;
			dfs(i+1,j);
		}
		if (!visited[i][j+1])
		{
			visited[i][j+1] = 1;
			dfs(i,j+1);
		}
	}
}	
int main(int argc, char const *argv[])
{
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			char q;
			cin>>q;
			if (q == '#')
			{
				a[i][j] = 1;

			}
			else{
				a[i][j] = 0;
				visited[i][j] = 1;

			}
		}
	}
	int cc = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int i = 0; i < m; ++i)
		{
			a[i][j]
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < m; ++j)
				{
					if (!visited[i][j])
					{
						cc+=1;
					}
				}
			}
	return 0;
}