#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[3002] = {0};
	for (int i = 0; i < n; ++i)
	{
		int e;
		cin>>e;
		a[e] = 1;
	}
	for (int i = 1; i < 3002; ++i)
	{
		if (a[i] == 0)
		{
			cout<<i<<endl;
			return 0;
		}
	}
}