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
			int n,m,rc = 0,cc = 0;
			cin>>n>>m;
			int r[n] = {0},c[m] = {0};
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < m; ++j)
				{
					int e;
					cin>>e;
					if (e == 1)
					{
						r[i] = 1;
						c[j] = 1;
					}
				}
			}
			for (int i = 0; i < n; ++i)
			{
				if (r[i] == 0)
				{
					rc++;
				}
			
			}
			for (int i = 0; i < m; ++i)
			{
				if (c[i] == 0)
				{
					cc++;
				}
			}
			if (min(rc,cc)%2 == 0)
			{
				cout<<"Vivek"<<endl;
			}
			else{
				cout<<"Ashish"<<endl;
			}
		}	
	return 0;
}