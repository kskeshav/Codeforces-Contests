#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	int c[6] = {0};
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if (a[i] == 4)
		{
			c[0]+=1;
		}
		if (a[i] == 8)
		{
			c[1]+=1;
		}
		if (a[i] == 15)
		{
			c[2]+=1;
		}
		if (a[i] == 16)
		{
			c[3]+=1;
		}
		if (a[i] == 23)
		{
			c[4]+=1;
		}
		if (a[i] == 42)
		{
			c[5]+=1;
		}
	}
	for (int i = 0; i < 6; ++i)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;	
	sort(c,c+6);
	cout<<n-6*c[0]<<endl;
	return 0;
}