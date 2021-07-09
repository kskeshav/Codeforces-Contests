#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll n,k,itr = -1;
	cin>>n>>k;
	ll a[n];
	ll k1 =k;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < min(k1,n); i++)
	{
		if (a[i]<0)
		{
			a[i] *=-1;
			k-=1;
		}
		else{
			break;
		}
	}
	sort(a,a+n);
	a[0] = a[0]*(pow(-1,k));
	ll s = 0;
	for (int i = 0; i < n; ++i)
	{
		s+=a[i];
	}
	cout<<s<<endl;
	return 0;
}