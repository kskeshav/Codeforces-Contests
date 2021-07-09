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
			vector<char> s[n+1];
			int a[n];
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
			for (int i = 0; i < a[0]; ++i)
			{
				s[0].pb('a');
			}
			int itr = 98;
			for (int i = 1; i <n; ++i)
			{
				for (int j = 0; j < a[i-1]; ++j)
				{
					s[i].pb(s[i-1][j]);
				}
				if (a[i]>a[i-1])
				{
					for (int j = 0; j < a[i]-a[i-1]; ++j)
					{
						s[i].pb((char)itr);
					}
				}
				itr = (itr+1)%26+97;
			}
			for (int i = 0; i < a[n-1]; ++i)
			{
				s[n].pb(s[n-1][i]);
			}
			for (int i = 0; i < n+1; ++i)
			{
				if (s[i].size() == 0)
				{
					cout<<(char)itr;
					itr = (itr+1)%26+97;
				}
				for (int j = 0; j < s[i].size(); ++j)
				{
					cout<<s[i][j];
				}
				cout<<endl;
			}
		}	
	return 0;
}