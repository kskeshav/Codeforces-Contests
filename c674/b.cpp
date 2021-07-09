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
			int f = 0;
			for (int i = 0; i < n; ++i)
			{
				int a,b,c,d;
				cin>>a>>b>>c>>d;
				if (b == c)
				{
					f = 1;
				}
			}
			if (m%2 != 0)
			{
				f = 0;
			}
			if (f == 1)
			{
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}	
	return 0;
}