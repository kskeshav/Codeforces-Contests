#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n],b[n];
	int bs = -100000,cs  =0,s = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if (a[i] == 0)
		{
			b[i] = 1;
		}
		else{
			b[i] = -1;
		}
		s+=a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cs = max(b[i],cs+b[i]);
		bs = max(bs,cs);
	}
	cout<<s+bs<<endl;
	return 0;
}

