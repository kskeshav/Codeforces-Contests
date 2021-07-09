#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n,a,b;
	int x[n] = {0};
	int y[n] = {0};
	int m = max(a,b);
	for (int i = 0; i < n; ++i)
	{
		cin>>x[i]>>y[i];
		if (x[i]>m)
		{
			x[i]  =0;
		}
		if (y[i]>m)
		{
			y[i]  =0;
		}
	}	
	int m[a][b] = {0};
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (min(x[i],y[i])+min(x[j],y[j]<=))
			{
				
			}
		}
	}
	return 0;
}