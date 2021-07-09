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
		int n;
		cin>>n;
		ll a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		ll m = 0;
		ll mi = a[0];
		for (int i = 1; i < n; ++i)
		{
			if (a[i]<a[i-1] && mi-a[i]>m)
			{
				m = mi-a[i];
			}
			else{
				mi = a[i];
			}
		}
		int x;
		if (m != 0)
		{
			x = ceil(log2(m))+1;
		}
		else{
			x = 0;
		}
		cout<<x<<endl;

	}	
	return 0;
}