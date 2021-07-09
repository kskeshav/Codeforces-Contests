#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
string t = "abacaba";
int check(string s,int n){
	int f = 1;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == t[0])
		{
			int j = i;
			if (i<=n-7)
			{
				for (j = i; j < n; ++j)
				{
					if (s[j] != t[j-i])
					{
						f = 0;
						break;
					}
				}
				if (j == n-1)
				{
					f = 1;
				}
			}
		}
	}
	return f;
}
int change(string s,int n){
	int f = 1;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == t[0])
		{
			int j = i;
			if (i<=n-8)
			{
				for (j = i; j < n; ++j)
				{
					if (s[j] != t[j-i])
					{
						if (s[j] != '?')
						{
							f = 0;
						}
						else{
							s[j] = t[j-i];
						}
					}
				}
			}
		}
	}
	if (f == 1)
	{
		cout<<"Yes"<<endl;
		for (int i = 0; i < n; ++i)
		{
			cout<<s[i];
		}
		cout<<endl;
	}
	return f;
}
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
			if (check(s,n))
			{
				cout<<"Yes"<<endl;
				for (int i = 0; i < n; ++i)
				{
					cout<<s[i];
					if (s[i] == '?')
					{
						cout<<"d";
					}
				}
				cout<<endl;
			}
			else{
				int ans = change(s,n);
				if (ans == 0)
				{
					cout<<"No"<<endl;
				}
			}
		}	
	return 0;
}