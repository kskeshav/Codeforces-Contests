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
		if (n%2 == 0)
		{
			cout<<n/2<<endl;
		}
		else{
			cout<<n/2+1<<endl;
		}
	}
	return 0;
}	