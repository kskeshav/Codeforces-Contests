#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int p[n];
	int a[n];
	cin>>a[0];
	p[0] = a[0];
	for (int i = 1; i < n; ++i)
	{
		cin>>a[i];
		p[i] = a[i];
		p[i]+=p[i-1];
	}
	int m = p[k-1];
	int itr = 1;
	for (int i = k; i < n; ++i)
	{
		if(m>(p[i]-p[i-k])){
			itr = i-k+2;
			m = p[i]-p[i-k];
		}
	}
	cout<<itr<<endl;
	return 0;
}