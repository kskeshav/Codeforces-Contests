#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n,f = 0;
		cin>>n;
		int a[n];
		vector<int> e;
		vector<int> o;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for (int i = 0; i < n; ++i)
		{
			if (a[i]%2 == 0)
			{
				e.push_back(a[i]);
			}
			else{
				o.push_back(a[i]);
			}
		}
		if (e.size()%2 == 0 && o.size()%2 == 0)
		{
			cout<<"YES"<<endl;
			continue;
		}
		else{
			sort(a,a+n);
			for (int i = 0; i < n-1; ++i)
			{
				if (a[i+1]-a[i] == 1)
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
		
	}
	return 0;
}