#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll a,b,c;
	cin>>a>>b>>c;
	ll p = (a+b-c)/2;
	ll q = (b+c-a)/2;
	ll r = (a+c-b)/2;
	if (p<0 || q<0 || r<0 || (a+b+c)%2 !=0)
	{
		cout<<"Impossible"<<endl;
		return 0;
	}
	cout<<p<<" "<<q<<" "<<r<<" "<<endl;
	return 0;
}