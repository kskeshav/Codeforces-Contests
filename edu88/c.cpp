#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	ll t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		long double h,c,t;
		cin>>h>>c>>t;
		if (h == t)
		{
			cout<<1<<endl;
			continue;
		}
		long double z = (t-c)/(h-t);
		if (z <=1)
		{
			cout<<2<<endl;
			continue;
		}
		else{
			long double y = 1.0/(z-1.0);
			y = ceil(y);
			if (abs((y*h+(y-1)*c)/(2*y-1)-t)<abs(((y+1)*h+y*c)/(2*y+1)-t))
			{
				cout<<2*y-1<<endl;
				continue;
			}
			cout<<2*y+1<<endl;		
		}
	}
	return 0;
}