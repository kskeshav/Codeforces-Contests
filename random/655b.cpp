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
		ll divisor = n;
		for (int i = 2; i < 3*1e9; ++i)
		{
			if (n%i == 0)
			{
				divisor = i;
				break;				
			}
		}
		cout<<n/divisor<<" "<<n-n/divisor<<endl;
	}		
	return 0;
}