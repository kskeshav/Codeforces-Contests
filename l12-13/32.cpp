#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll n,min,c = 0,ind=1;
	cin>>n;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	min = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (a[i]<min)
		{
			c = 0;
			min = a[i];
			ind = i+1;
		}
		if (a[i] == min)
		{
			c+=1;
		}
	}
	if (c != 1)
	{
		cout<<"Still Rozdil"<<endl;
	}
	else{
		cout<<ind<<endl;
	}
	return 0;
}