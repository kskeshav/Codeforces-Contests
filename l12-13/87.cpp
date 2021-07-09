#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
bool check(ll n){
	int c4 = 0;
	int c7 = 0;
	while(n>0){
		if (n%10 == 4)
		{
			c4+=1;
		}
		else{
			c7+=1;
		}
		n/=10;
	}	
	return c4==c7;
}
int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	vector<ll> a;
	vector<ll> l;
	a.pb(4);
	a.pb(7);
	for (ll i = 0; i < a.size(); i+=1)
	{
		a.pb(a[i]*10+4);
		a.pb(a[i]*10+7);
		if (a[i]>1e10)
		{
			break;
		}
		if (check(a[i]))
		{
			l.pb(a[i]);
		}
	}	
	for (int i = 0; i < l.size(); ++i)
	{
		if (l[i]>= n)
		{
			cout<<l[i]<<endl;
			break;
		}
	}
	return 0;
}