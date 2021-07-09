#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n,m,a,b;
		cin>>n>>m>>a>>b;
		int mat[n][m] = {0};
		memset(mat, 0, sizeof(mat));
		if (n*a != m*b)
		{
			cout<<"NO"<<endl;
			continue;
		}
		else{
			n *= a;
			cout<<"YES"<<endl;
			int i = 0;
			int j = 0;
			int c = 0;
			for (int k = 0; k < n; ++k)
			{
				mat[i][j] = 1;
				j = (j+1)%m;
				c+=1;
				if (c == a)
				{
					i+=1;
					c = 0;
				}
			}
		}
		n/=a;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout<<mat[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}