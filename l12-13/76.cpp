#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int	n = s.length();
	int a[n+1] = {0};
	for (int i = 0; i < n-1; ++i)
	{
		if (s[i] == s[i+1])
		{
			a[i+1]+=1;
		}
	}
	for (int i = 1; i < n+1; ++i)
	{
		a[i]+=a[i-1];
	}
	int m;
	cin>>m;
	for (int i = 0; i < m; ++i)
	{
		int l,r;
		cin>>l>>r;
		cout<<a[r-1]-a[l-1]<<endl;
	}
	return 0;
}
