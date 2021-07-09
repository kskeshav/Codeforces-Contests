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
		ll n,m = 300000;
		cin>>n;
		int a[n] = {0};
		int pos[n+1];
		for (int i = 0; i < n+1; ++i)
		{
			pos[i] = -1;
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			if (pos[a[i]] != -1){
				if ((i-pos[a[i]])<m)
				{
					m = i-pos[a[i]];
				}
			}
			pos[a[i]] = i;
		}
		if (m == 300000)
		{
			cout<<-1<<endl;
		}
		else
		cout<<m+1<<endl;
	}	
	return 0;
}