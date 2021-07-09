#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	int c = 0,f = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == i)
		{
			c+=1;
		}
		else{
			if (a[a[i]] == i)
			{
				f = 1;
			}
		}
	}
	cout<<min(c+f+1,n)<<endl;
	return 0;
}
