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
			int n,m;
			cin>>n>>m;
			int ans = 0;
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < m; ++j)
				{
					char c;
					cin>>c;
					if (i == n-1 && c == 'D' && j != m-1)
					{
						ans+=1;
					}
					if (j == m-1 && c == 'R' && i != n-1)
					{
						ans+=1;
					}
				}
			}
			cout<<ans<<endl;
		}	
	return 0;
}