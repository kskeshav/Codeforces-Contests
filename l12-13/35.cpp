#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int n = s.size();
	int w[200],c = 0;
	for (int i = 0; i < n-2; ++i)
	{
		if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
		{
			w[c++] = i;
		}
	}
	int st = 0;
	for (int i = 0; i < c; ++i)
	{
			int f = 0;
			for (int j = st; j < w[i]; ++j)
			{
				cout<<s[j];
				f = 1;
			}
			if (f == 1)
			{
				cout<<" ";
			}
			st = w[i]+3;
	}
	if (st != n)
	{
		for (int i = st; i < n; ++i)
		{
			cout<<s[i];
		}
	}
	cout<<endl;	
	return 0;
}
