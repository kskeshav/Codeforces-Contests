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
			int a[n];
			int maxd = 0;
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
			sort(a,a+n);
			for (int i = 1; i < n; ++i)
			{
				maxd = max(maxd,a[i]-a[i-1]);
			}
			if (n>1 && maxd>1)
			{
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}	
	return 0;
}