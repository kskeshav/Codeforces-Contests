#include<bits/stdc++.h>
using namespace std;	
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		ll a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		int f = 0;
		if(a-x<b-y){
			n-=a-x;
			a=  x;
			b = max(y,b-n);
		}
		else{
			n-=b-y;
			b = y;
			a = max(x,a-n);
		}
		cout<<a*b<<endl;
	}	
	return 0;
}