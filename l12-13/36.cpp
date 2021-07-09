#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int n = s.size(),c = 0;
	if (s[0] == '4')
	{
		cout<<"NO"<<endl;
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		if (s[i] != '1' && s[i] != '4')
		{
			cout<<"NO"<<endl;
			return 0;
		}
		if (s[i] == '4')
		{
			c+=1;
		}
		else{
			c = 0;
		}
		if (c>2)
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}