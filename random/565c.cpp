#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	int m[43] = {0};
	m[4] = 1;
	m[8] = 2;
	m[15] = 3;
	m[16] = 4;
	m[23] = 5;
	m[42] = 6;
	int c[7] = {0};
	c[0] = n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if (c[m[a[i]]-1]>0)
		{
			c[m[a[i]]-1]--;
			c[m[a[i]]]++;
		}
		
	}
	cout<<n-6*c[6]<<endl;
	return 0;
}