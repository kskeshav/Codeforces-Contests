#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll int n;
	cin>>n;
	int a[n],c0 = 0,c5 = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if (a[i] == 0)
		{
			c0+=1;
		}
		if (a[i] == 5)
		{
			c5+=1;
		}
	}
	if (c0 == 0)
	{
		cout<<-1<<endl;
		return 0;
	}
	if (c5 == 0 || int(c5/9) == 0)
	{
		cout<<0<<endl;
		return 0;
	}
	for (int i = 0; i < int(c5/9)*9; ++i)
	{
		cout<<5;
	}
	for (int i = 0; i < c0; ++i)
	{
		cout<<0;
	}
	cout<<endl;
	return 0;
}