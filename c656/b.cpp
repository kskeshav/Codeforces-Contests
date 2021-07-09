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
			int n;
			cin>>n;
			n = n*2;
			int a[n];
			int o[n+1] = {0};
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
			for (int i = 0; i < n; ++i)
			{
				if (o[a[i]] == 0)
				{
					cout<<a[i]<<" ";
					o[a[i]] = 1;
				}
			}
			cout<<endl;
		}	
	return 0;
}