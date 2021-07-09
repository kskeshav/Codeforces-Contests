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
	ll a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	if (a[2] == a[0])
	{
		cout<<"YES"<<endl;
		cout<<a[0]<<" "<<a[0]<<" "<<a[0]<<endl;
	}
	else{
		if (a[0]<a[1] && a[1]==a[2])
		{
			cout<<"YES"<<endl;
			cout<<1<<" "<<a[0]<<" "<<a[1]<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
	return 0;
}