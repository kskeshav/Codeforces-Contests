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
			ll n;
			cin>>n;
			ll x = sqrt(n);
			if (x*x >= n)
			{
				cout<<x+x-2<<endl;
			}
			else if (x*(x+1)>=n)
			{
				cout<<x+x-1<<endl;
			}
			else{
				cout<<x+x<<endl;
			}
		}	
	return 0;
}