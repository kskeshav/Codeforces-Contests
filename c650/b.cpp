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
			int o = 0,e = 0;
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
				if (i%2 != a[i]%2)
				{
					if (i%2 != 0)
					{
						o+=1;
					}
					else{
						e+=1;
					}
				}
			}
			if (o!=e)
			{
				cout<<-1<<endl;
			}
			else{
				cout<<o<<endl;
			}
		}	
	return 0;
}	