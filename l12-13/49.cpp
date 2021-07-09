#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll n,tp = 2;
	cin>>n;
	ll a[n];
	int ml = min(tp,n),cl = min(tp,n);
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 2; i < n; ++i)
	{
		if (a[i] == a[i-1]+a[i-2])
		{
			cl+=1;
		}
		else{
			if (cl>ml)
			{
				ml = cl;
			}
			cl = 2;
		}
	}
	cout<<max(ml,cl)<<endl;
	return 0;
}