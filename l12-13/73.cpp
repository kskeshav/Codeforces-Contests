#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n,k,ms = 0,f = 0;
	cin>>n>>k;
	int h[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>h[i];
	}
	for (int i = 0; i < k; ++i)
	{
		ms +=h[i];
	}
	int cs = ms;
	int j = 0;
	for (int i = 0; i < n-k; ++i)
	{
		cs-=h[i];
		cs+=h[i+k];
		if (cs<ms)
		{
			ms = cs;
			j = i;
			f = 1;
		}
	}
	if (f == 0)
	{
		cout<<1<<endl;
	}
	else{
		cout<<j+2<<endl;
	}
	return 0;
}