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
			ll n;
			cin>>n;
			ll a[n];
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];

			}
			if ((a[0]+a[1])<=a[n-1])
			{
				cout<<1<<" "<<2<<" "<<n<<endl;
			}
			else{
				cout<<-1<<endl;
			}
		}	
	return 0;
}