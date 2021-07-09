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
			int n,x;
			cin>>n>>x;
			if (n<=2)
			{
				cout<<1<<endl;
			}
			else{
				n-=2;
				int ans = n/x+1;
				if (n%x != 0)
				{
					ans+=1;
				}
				cout<<ans<<endl;
			}
		}	
	return 0;
}