#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	string s,t;
	cin>>s>>t;
	int n = s.length();
	for (int i = 0; i < n; ++i)
	{
		if (s[i] != t[n-i-1])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
