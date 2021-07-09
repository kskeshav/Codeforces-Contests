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
			int x = n+1,y = n+1,z = 0,f = 0;
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
			for (int i = 0; i < n-1; ++i)
			{
				if (a[i+1]>a[i])
				{
					x = i+1;
					y = i+2;
				}
				else{
					y = i+1;
					z = i+2;
				}
				if (x<y && y<z)
				{
					f = 1;
					break;
				}
			}
			if (f == 0)
			{
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
				cout<<x<<" "<<y<<" "<<z<<endl; 
			}
		}	
	return 0;
}