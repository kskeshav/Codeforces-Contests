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
		ll a,b;
		cin>>a>>b;
		ll x = abs(a-b);
		if (x%10 == 0)
		{
			cout<<x/10<<endl;
		}
		else{
			cout<<x/10+1<<endl;
		}

	}	
	return 0;
}