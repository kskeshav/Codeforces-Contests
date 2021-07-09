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
			int a[n][m];
			int f = 0;
			for(int i = 0; i < n; ++i)
			{
				for(int j = 0; j < m; ++j)
				{
					cin>>a[i][j];
					if ((i== 0 &&(j == 0 || j == m-1 )) || (i == n-1 &&(j == 0 || j == m-1)))
					{
						if (a[i][j]>2)
						{
							f = 1;
						}
					}
					if (i == 0 || i == n-1 || j == 0 || j == m-1)
					{
						if (a[i][j]>3)
						{
							f = 1;
						}
					}
					if (a[i][j]>4)
					{
						f = 1;
					}
				}
			}
			if (f == 1)
			{
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
				a[0][0] = 2;
				a[0][m-1] = 2;
				a[n-1][0] = 2;
				a[n-1][m-1] = 2;
				for (int i = 1; i < m-1; ++i)
				{
					a[0][i] = 3;
					a[n-1][i] = 3;
				}
				for (int i = 1; i < n-1; ++i)
				{
					a[i][0] = 3;
					a[i][m-1] = 3;
				}
				for (int i = 1; i < n-1; ++i)
				{
					for (int j = 1; j < m-1; ++j)
					{
						a[i][j] = 4;
					}
				}
				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j < m; ++j)
					{
						cout<<a[i][j]<<" ";
					}
					cout<<endl;
				}
			}	
		}	
	return 0;
}