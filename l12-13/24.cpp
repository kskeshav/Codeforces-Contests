#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll int n,k;
	cin>>n>>k;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = i+1;
	}
	for (int i = 0; i < k; i++)
	{
		cout<<a[n-i-1]<<" ";
	}
	for (int i = 0; i < n-k; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
