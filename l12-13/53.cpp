#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll n,c3 = 0,c4 = 0,c6 = 0;
	cin>>n;
	ll a[8] = {0};
	for (int i = 0; i < n; ++i)
	{
		int e;
		cin>>e;
		a[e]+=1;
	}
	a[1]-=a[3];
	a[6]-=a[3];
	a[2]-=a[4];
	a[1]-=a[4];
	c6 = a[6];
	c3 = a[3];
	c4 = a[4];
	if (a[6]>0)
	{
		a[2]-=a[6];
		a[1]-=a[6];
		a[6] = 0;
	}
	a[3] = 0;
	a[4] = 0;
	for (int i = 0; i < 8; ++i)
	{
		if (a[i] != 0)
		{
			cout<<-1<<endl;
			return 0;
		}
	}
	for (int i = 0; i < c3; ++i)
	{
		cout<<1<<" "<<3<<" "<<6<<endl;;
	}
	for (int i = 0; i < c4; ++i)
	{
		cout<<1<<" "<<2<<" "<<4<<endl;;
	}
	for (int i = 0; i < c6; ++i)
	{
		cout<<1<<" "<<2<<" "<<6<<endl;;
	}
	return 0;
}