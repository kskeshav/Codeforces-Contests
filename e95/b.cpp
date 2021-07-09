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
		int a[n];
		int f[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>f[i];
		}
		vector<int> tp;
		for (int i = 0; i < n; ++i)
		{
			if (f[i] == 0)
			{
				tp.pb(a[i]);
			}
		}
		int itr = 0;
		sort(tp.begin(),tp.end());
		reverse(tp.begin(), tp.end());
		for (int i = 0; i < n; ++i)
		{
			if (f[i] == 1)
			{
				cout<<a[i]<<" ";
			}
			else{
				cout<<tp[itr]<<" ";
				itr+=1;
			}
		}
		cout<<endl;
	}	
	return 0;
}