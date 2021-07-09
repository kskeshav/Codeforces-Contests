#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		ll int n,index;
		cin>>n;
		ll int a[n];
		ll int s[100000];
		l = 1;
		r = n;
		for (int i = 0; i < n; ++i)
		{
			if ((l-r+1)%2 == 0)
			{
				index = (l+r-1)/2;
				a[index] = i;
			}
			else{
				index = (l+r)/2;
				a[index] = i;
			}
		}