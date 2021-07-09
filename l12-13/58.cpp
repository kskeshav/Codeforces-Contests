#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll n,c = 1,mc = 1;
	cin>>n;
	int ph = -1,pm = -1;
	for (int i = 0; i < n; ++i)
	{
		int h,m;
		cin>>h>>m;
		if (h == ph && m == pm)
		{
			c++;
		}
		else{
			if (c>mc)
			{
				mc = c;
			}
			c = 1;
		}
		ph = h;
		pm = m;
	}
	if (c>mc)
			{
				mc = c;
			}
	cout<<mc<<endl;
	return 0;
}