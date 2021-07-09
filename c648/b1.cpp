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
			int n,f = 0,c = 0;
			cin>>n;
			int a[n],b[n];
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
			for (int i = 0; i < n; ++i)
			{
				cin>>b[i];
			}
			for (int i = 0; i < n-1; ++i)
			{
				if (a[i]>a[i+1])
				{
					f = 1;
				}
				if (b[i] == 1)
				{
					c++;
				}
			}
			if (b[n-1] == 1)
			{
				c++;
			}
			if (c != n/2 && c != n/2+1 && f == 1)
			{
				cout<<"No"<<endl;
			}
			else{
				cout<<"Yes"<<endl;
			}
		}	
	return 0;
}