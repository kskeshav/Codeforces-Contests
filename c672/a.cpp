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
			ll a[n];
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
			int f = 0;
			for (int i = 1; i < n; ++i)
			{
				if (a[i]>=a[i-1])
				{
					f = 1;
				}
			}
			sort(a,a+n);
			for (int i = 1; i < n; ++i)
			{
				if (a[i] == a[i-1])
				{
					f = 1;
					break;
				}
			}
			if (f == 1)
			{
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}	
	return 0;
}