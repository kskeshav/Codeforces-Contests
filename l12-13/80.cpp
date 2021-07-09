#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int a,b,c,d,x,y;
	cin>>a>>b>>c>>d;
	x = b*c;
	y = a*d;
	int g = __gcd(x,y);
	x /= g;
	y /= g;
	if (x>y)
	{
		cout<<(x-y)<<"/"<<x<<endl;
	}
	else{
		cout<<(y-x)<<"/"<<y<<endl;
	}
	return 0;
}