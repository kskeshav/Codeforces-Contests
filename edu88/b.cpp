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
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		int f = 0;
		int c = 0;
		int tc = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				char e;
				cin>>e;
				if (e == '.')
				{
					if (f == 1)
					{
						c+=1;
						f = 0;
					}
					else{
						f = 1;
					}
					tc+=1;
				}
				else{
					f = 0;
				}
			}
			f = 0;
		}
		if (2*x<=y)
		{
			cout<<x*tc<<endl;
		}
		else{
			cout<<x*(tc-2*c)+y*c<<endl;
		}

	}
	return 0;
}