#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	ll a[n];
	for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}	
	int pos = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i]>a[i-1])
		{
			inc = 1;
		}
		if (a[i]<a[i-1])
		{
			dec = 1;
		}
		if (a[i] == a[i-1])
		{
			c+=1;
			pos = i;
			inc = 0;
			dec = 0;
		}
		
	}
	return 0;
}