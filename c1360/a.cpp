#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int a,b,x,y,z;
		cin>>a>>b;
		x = min(a,b);
		y = max(a,b);
		z = max(2*x,y);
		cout<<z*z<<endl;	
	}
	return 0;
}