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
			int c[n+1] = {0};
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
				c[a[i]]++;
			}
			int m = 0,mm = 0;
			for (int i = 0; i < n+1; ++i)
			{
				if (c[i]>1)
				{
					m+=1;
				}
			}
			sort(c,c+n+1);
			int mx = c[n];
			for (int i = 0; i < n+1; ++i)
			{
				if (c[i] == mx)
				{
					mm+=1;
				}
			}
			if (m == 1)
			{
				if (mx == n)
				{
					cout<<0<<endl;
					continue;
				}
			}
			int b = mx-1;
			int r = n-mm*mx;
			int x = r/b;
			cout<<x+m-1<<endl;
		}	
	return 0;
}