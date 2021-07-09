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
			int c = 0;
			int f=  0;
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
				if (a[i] == i+1)
				{
					if(f == 1)c++;
				}
				else{
					f = 1;
				}
			}
			int cs = 0;
			for (int i = n-1; i >=0; --i)
			{
				if (a[i]!=i+1)
				{
					break;
				}
				cs++;
			}
			if (c-cs>0)
			{
				cout<<2<<endl;	
				continue;
			}
			if (f == 1)
			{
				cout<<1<<endl;
				continue;
			}
			cout<<0<<endl;
		}	
	return 0;
}	