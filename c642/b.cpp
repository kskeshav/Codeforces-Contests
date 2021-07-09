#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n,k,s = 0,s1 = 0;
		cin>>n>>k;
		int a[n],b[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			s+=a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		s1 = s;
		for (int i = 0; i < k; ++i)
		{
			if (a[i]>b[n-i-1])
			{
				break;
			}
			s1+=b[n-i-1];
			s1-=a[i];
		}
		cout<<s1<<endl;
	}
	return 0;
}