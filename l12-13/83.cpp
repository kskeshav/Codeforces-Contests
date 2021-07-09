#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int a[m][3];
	int ans[n+1] = {0};
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin>>a[i][j];
		}
	}

	for (int i = 0; i < m; ++i)
	{
		int f1 = 0,f2 = 0,f3 = 0;
		for (int j = 0; j < 3; ++j)
		{
			if (ans[a[i][j]] == 1)
			{
				f1 = 1;
			}
			if (ans[a[i][j]] == 2)
			{
				f2 = 1;
			}
			if (ans[a[i][j]] == 3)
			{
				f3 = 1;
			}
		}
		if (f1 == 0)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (ans[a[i][j]] == 0)
				{
					ans[a[i][j]] = 1;
					break;
				}
			}
		}
		if (f2 == 0)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (ans[a[i][j]] == 0)
				{
					ans[a[i][j]] = 2;
					break;
				}
			}
		}
		if (f3 == 0)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (ans[a[i][j]] == 0)
				{
					ans[a[i][j]] = 3;
					break;
				}
			}
		}
	}
	for (int i = 1; i < n+1; ++i)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}