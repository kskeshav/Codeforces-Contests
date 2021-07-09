#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
		{
			int n;
			cin>>n;
			string a,b;
			cin>>a>>b;
			int f = 0;
			vector<int> count[26];
			int ans[20][20] = {0};
			for (int i = 0; i < n; i++)
			{
				if (a[i]<b[i])
				{
					count[a[i]-97].pb(b[i]-97);
				}
				else if(a[i]>b[i]){
					f = 1;
				}
			}
			for (int i = 0; i < 20; ++i)
			{
				sort(count[i].begin(),count[i].end());
			}
			for (int i = 0; i < 20; ++i)
			{
				int x = i;
				for (int j = 0; j < count[i].size(); ++j)
				{
					if(x != count[i][j]){
						ans[x][count[i][j]] = 1;
					}
					x = count[i][j];
				}
			}
			int fans = 0;
			for (int i = 0; i < 20; ++i)
			{
				for (int j = 0; j < 20; ++j)
				{
					fans +=ans[i][j];
				}
			}
			if (f == 0)
			{
				cout<<fans<<endl;
			}
			else{
				cout<<-1<<endl;
			}
		}	
	return 0;
}