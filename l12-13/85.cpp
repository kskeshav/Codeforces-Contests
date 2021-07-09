#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	int c = 0;
	int g = __gcd(a,b);
	int ar[3] = {2,3,5};
	a /= g;
	b /= g;
	int f = 0;
	while(a>1){
		for (int i = 0; i < 3; ++i)
		{
			if (a%ar[i] == 0)
			{
				a/=ar[i];
				c+=1;
				f = 1;
			}
		}
		if (f == 0)
		{
			cout<<-1<<endl;
			return 0;
		}
		f = 0;
	}
	f = 0;
	while(b>1){
		for (int i = 0; i < 3; ++i)
		{
			if (b%ar[i] == 0)
			{
				b/=ar[i];
				c+=1;
				f = 1;
			}
		}
		if (f == 0)
		{
			cout<<-1<<endl;
			return 0;
		}
		f = 0;
	}
	cout<<c<<endl;
	return 0;
}