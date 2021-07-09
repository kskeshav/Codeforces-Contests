#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	vector<int> b;
	int m = 0;
	for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if (m<a[i])
			{
				m = a[i];
			}
		}
	int visited[n];
	int itr = 0;
	int c = 0;
	for (int i = 0; i < n; ++i)
	{
		if (itr+1<a[i])
		{
			itr+=1;
		}
		if (itr<a[i])
		{
			b.pb(itr);
			c++;
		}
	}
	itr--;
	for (int i = 0; i < n-c; ++i)
	{
		b[i] = itr;
		if (itr+1<m)
		{
			itr++;
		}	
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	for (int i = 0;i<n-1;i++)
		{
			if (a[i]<=b[i])
			{
				int t = b[i];
				b[i] = b[i+1];
				b[i+1] = t;
			}
		}
	for (int i = 0; i < n; ++i)
		{
			cout<<b[i]<<" ";
		}	
	cout<<endl;
	return 0;
}