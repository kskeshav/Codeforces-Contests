#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		cin>>n;
		int s[n];
		int md = 10000;
		for (int i = 0; i < n; ++i)
		{
			cin>>s[i];
		}
		sort(s,s+n);
		for (int i = 1; i < n; ++i)
		{
			if (abs(s[i]-s[i-1])<=md)
			{
				md = abs(s[i]-s[i-1]);
			}
		}
		cout<<md<<endl;
	}
	return 0;
}