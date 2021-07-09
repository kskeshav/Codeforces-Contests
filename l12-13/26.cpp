#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll int n,a;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a;
		if (360%(180-a) == 0)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}