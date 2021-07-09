#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int r = 0; r < t; ++r)
		{
			int n,k;
			cin>>n>>k;
			int f = 0;
			if (k == 0)
			{
				cout<<f<<endl;
				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j < n; ++j)
					{
						cout<<0;
					}
					cout<<endl;
				}
				continue;
			}
			if (k%n != 0)
			{
				f = 2;
			}
			cout<<f<<endl;
			int a[n][n];
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					a[i][j] = 0;
				}
			}
			int i = -1;
			int j = -1;
			int itr = 0;
			int jitr = 1;
			while(itr<k){
				i = (i+1)%n;
				j = (j+1)%n;
				if (itr%n == 0 && itr!= 0)
				{
					j = jitr;
					jitr+=1;
				}
				a[i][j] = 1;
				itr++;
			}
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					cout<<a[i][j];
				}
				cout<<endl;
			}
		}	
	return 0;
}