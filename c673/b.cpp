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
			ll n,k;
			cin>>n>>k;
			ll a[n];
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
			if (k%2 != 0)
			{
				k/=2;
				for (int i = 0; i < n; ++i)
				{
					if (a[i]>k)
					{
						cout<<0<<" ";
					}
					else
					{
						cout<<1<<" ";
					}
				}
				cout<<endl;
			}
			else{
				k = k/2;
				int f = 0;
				for (int i = 0; i < n; ++i)
				{
					if (a[i]>k)
					{
						cout<<0<<" ";
					}
					else if (a[i]<k)
					{
						cout<<1<<" ";
					}
					else{
						cout<<1-f<<" ";
						f = 1-f;
					}
				}
				cout<<endl;
			}
		}	
	return 0;
}