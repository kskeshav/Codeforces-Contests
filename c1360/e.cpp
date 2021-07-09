#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		cin>>n;
		int a[n][n];
		int f[n][n] = {0};
		memset(f, 0, sizeof(f));
		int ff = 0;
		for (int i = 0; i < n; ++i)
		{
			string e;
			cin>>e;
			for (int j = 0; j < n; ++j)
			{
				a[i][j] = e[j]-48;
			}
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n-1; ++j)
			{
				if (a[i][j] == 1 && a[i][j+1] == 0)
				{
					f[i][j] += 1;
				}
			}
		}
		for (int j = 0; j < n; ++j)
		{
			for (int i = 0; i < n-1; ++i)
			{
				if (a[i][j] == 1 && a[i+1][j] == 0)
				{
					f[i][j] += 1;
				}
				else{
					
				}
			}
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (f[i][j] == 2)
				{
					cout<<"NO"<<endl;
					ff = 1;
					break;	
				}
			}
			if (ff == 1)
			{
				break;
			}
		}
		if (ff == 0)
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
