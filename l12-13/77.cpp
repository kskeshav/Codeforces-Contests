#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int a,b,c,s = 0;
	ll n = 1e9;
	cin>>a>>b>>c;
	vector<ll> v;
	for (int i = 1; i < 81; ++i)
	{
		ll x = b*pow(i,a)+c;
		ll x1 = x;
		s = 0;
		while(x>0){
			s+=x%10;
			x/=10;
		}
		if (s == i && x1<n)
		{
			v.push_back(x1);
		}
	}
	cout<<v.size()<<endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";	
	}
	cout<<endl;
	return 0;
}
