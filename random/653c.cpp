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
			int ans = 0;
			for (int i = 0; i < n; ++i)
			{
				char c;
				cin>>c;
				if (c == '(')
				{
					a[i] = 1;
				}
				else{
					a[i] = -1;
				}
			}
			for (int i = 0; i < n; ++i)
			{
				if (a[i] == 1)
				{
					ans+=1;
				}
				else{
					if (ans>0)
					{
						ans-=1;
					}
				}
			}
			cout<<ans<<endl;
		}	
	return 0;
}