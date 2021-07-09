#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s,t;
	cin>>s>>t;
	int c= 0 ;
	int a[26] = {0},b[26] = {0};
	if (s.length() != t.length())
	{
		cout<<"NO"<<endl;
		return 0;
	}
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] != t[i])
		{
			c+=1;
		}
		a[s[i]-97] +=1;
		b[t[i]-97] +=1;
	}
	if (c >2)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	for (int i = 0; i <26; ++i)
	{
		if (a[i] != b[i])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}