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
			string s;
			cin>>s;
			int x;
			cin>>x;
			int n = s.size();	
			int w[n] = {0};
			int f[n] = {0};
			int af = 0;
			for (int i = 0; i < x; ++i)
			{
				if(i+x<n){
					w[i+x] = s[i]-48;
					f[i+x] = 1;
				}
				else{
					af = 1;
				}
			}
			for (int i = n-x; i < n; ++i)
			{
				if ((i-x)>=0)
				{
					if (f[i-x] == 1 && w[i-x] != s[i]-48)
					{
						af = 1;
					}
					else{
						w[i-x] = s[i]-48;
						f[i-x] = 1;
					}
				}
				else{
					af = 1;
				}
			}
			for (int i = x;i<n-x;i++){
				if (s[i] == '0')
				{
					if ((f[i-x] == 1 && w[i-x] == 1)||( f[i+x] == 1 && w[i+x] == 1))
					{
							af = 1;
					}
					else{
						f[i-x] = 1;
						f[i+x] = 1;
						w[i-x] = 0;
						w[i+x] = 0;
					}
				}
				else{
					if (f[i-x] == 1 && w[i-x] == 0)
					{
						if (f[i+x] == 1 && w[i+x] == 0)
						{
							af = 1;
						}
						else{
							w[i+x] = 1;
							f[i+x] = 1;
						}
					}
					else{
						w[i-x] = 1;
						f[i-x] = 1;
					}
				}
			}
			if (af == 1)
			{
				cout<<-1<<endl;
			}
			else{
				for (int i = 0; i < n; ++i)
				{
					cout<<w[i];
				}
				cout<<endl;
			}
		}	
	return 0;
}