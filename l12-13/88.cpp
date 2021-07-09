#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int itr = 1;
	int t[n+1] = {0};
	for (int i = 0; i < m; i++)
		{
			int a,b;
			cin>>a>>b;
			if (t[a]>0 || t[b]>0)
			{
				t[a] = max(t[a],t[b]);
				t[b] = t[a];
			}
			else{
				t[a] = itr;
				t[b] = itr;
				itr+=1;
			}
		}	
	vector<int> f;
	for (int i = 1; i <=n/3; ++i)
	{	int c = 0;
		vector<int> v;
		vector<int> z;
		for (int j = 1; j < n+1; ++j)
		{
			if (t[j] == i)
			{
				c+=1;
				v.pb(j);
			}
			if (t[j] == 0)
			{
				z.pb(j);
			}
		}
		if (c>3)
		{
			cout<<-1<<endl;
			return 0;
		}
		else if (c == 3)
		{
			for (int i = 0; i < 3; ++i)
			{
				f.pb(v[i]);
			}
		}
		else{
			if (c == 0)
			{
				for (int i = 0; i < 3; ++i)
				{
					f.pb(z[i]);
				}
			}
			else{
				f.pb(v[0]);
				f.pb(v[1]);
				f.pb(z[0]);
				
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (i%3 == 0 && i!=0)
		{
			cout<<endl;
		}
		cout<<f[i]<<" ";
	}
	cout<<endl;
	return 0;
}