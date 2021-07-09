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
		int c0 = 0,c1 = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if (a[i] == 0)
			{
				c0+=1;
			}
			else{
				c1+=1;
			}
		}
		n = n/2;
		if (c0>=n)
		{
			cout<<n<<endl;
			for (int i = 0; i < n; ++i)
			{
				cout<<0<<" ";
			}
			cout<<endl;
		}
		else{
			if (n%2)
			{
				n+=1;
			}
			cout<<n<<endl;
			for (int i = 0; i < n; ++i)
			{
				cout<<1<<" ";
			}
			cout<<endl;
		}
	}	
	return 0;
}