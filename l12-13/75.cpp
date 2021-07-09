#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n,a,b,c,m = 0;
	cin>>n>>a>>b>>c;
	int x = n/a;
	int r = 0;
	for (int i = 0; i <= x; ++i)
	{
		r = n-i*a;
		int y = r/b;
		for (int j = 0; j <= y; ++j)
		{
			int t = n-a*i-b*j;
			if (t%c == 0)
			{
				int z = t/c;
				if (i+j+z>m)
				{
					m = i+j+z;
				}
			}
		}
	}
	cout<<m<<endl;
	return 0;
}