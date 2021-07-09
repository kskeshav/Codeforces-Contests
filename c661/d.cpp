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
			string s;
			cin>>s;
			int c0 = 1,c1 = 1,f0 = 0,f1 = 0,m0 = 0,m1 = 0;
			int ans[n] = {0};
			int fans = 0;
			for (int i = 0; i < n; ++i)
			{
				if (s[i] == '0')
				{
					if (f0 == 1)
					{
						c0+=1;
						if (c0>c1)
						{
							c0 = m0+1;
						}
					}
					else{
						c0 = 1;
					}
					ans[i] = c0;
					f1 = 0;
					f0 = 1;
				}
				else{
					if (f1 == 1)
					{
						c1+=1;
						if (c1>c0)
						{
							c1 = m1+1;
						}
					}
					else{
						c1 = 1;
					}
					ans[i] = c1;
					f1 = 1;
					f0 = 0;
				}
				m0 = max(m0,c0);
				m1 = max(m1,c1);
			}
			cout<<max(m0,m1)<<endl;
			for (int i = 0; i < n; ++i)
			{
				cout<<ans[i]<<" ";
			}
			cout<<endl;
		}	
	return 0;
}