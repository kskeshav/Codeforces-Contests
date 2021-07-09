#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	ll a[n],b[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i]>>b[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] != b[i])
		{
			cout<<"Happy Alex"<<endl;
			return 0;
		}
	}
	cout<<"Poor Alex"<<endl;
	return 0;
}