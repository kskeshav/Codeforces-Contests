#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n,f = 0,l = 0,r = 0;
	cin>>n;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{	
		cin>>a[i];
	}
	for (int i = 0; i < n-1; ++i)
	{
		ll w,x,y,z;
		w = a[i];
		x = a[i+1];
		for (int j = 0; j < n-1; ++j)
		{
			if (j != i)
			{
				y = a[j];
				z = a[j+1];
				if (w<x && )
				{
					/* code */
				}
			}
		}
	}	
	return 0;
}