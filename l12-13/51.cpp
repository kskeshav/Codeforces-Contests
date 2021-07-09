#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n,m,c = 0;
	cin>>n>>m;
	char a[n+2][m+2] = {'.'};
	for (int i = 1; i < n+1; ++i)
	{
		for (int j= 1; j < m+1; ++j)
		{
			cin>>a[i][j];
		}
	}
	for (int i = 1; i < n+1; ++i)
	{
		for (int j = 1; j < m+1; ++j)
		{
			if (a[i][j] == 'W')
			{

				if (a[i-1][j]=='P'|| a[i+1][j]=='P'||a[i][j-1]=='P'||a[i][j+1]=='P')
				{
					c++;
				}
			}
		}
	}
	cout<<c<<endl;
	return 0;
}