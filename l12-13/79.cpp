#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n,count = 0;
	cin>>n;
	int a[n],b[n];
	int c[1005] = {0};
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i]>>b[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i != j && a[i] == b[j])
			{
				count++;
				break;
			}
		}
	}
	cout<<n-count<<endl;
	return 0;
}
