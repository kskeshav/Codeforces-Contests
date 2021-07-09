#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int ans = 1;
	for (int i = 1; i < n; ++i)
		{
			ans+= i*4;
		}	
	cout<<ans<<endl;
	return 0;
}