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
			int c[n+1] = {0};
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
				c[a[i]]++;
			}
			queue<int> q;
			for (int i = 0; i < n; ++i)
			{
				if (c[i]>0)
				{
					q.push(i);
				}
			}
			int l = 0,r = n-1;
			int mem = -1;
			while(l<r){
				c[a[l]]--;
				c[a[r]]--;
				int m = min(a[l],a[r]);
				if (c[m] == 0)
				{
					cout<<m<<" ";
					mem = m;
				}
				else{
					cout<<mem<<" ";
				}
				l++;
				r--;
			}
			cout<<endl;
		}	
	return 0;
} 