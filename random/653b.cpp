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
			ll ans = 0;
			while(true){
				if (n%6 == 0)
				{
					n /=6;
					ans+=1;
				}
				else{
					if (n == 1)
					{
						cout<<ans<<endl;
						break;
					}
					n*=2;
					if (n%6 == 0)
					{
						ans+=1;
						continue;
					}
					else{
						cout<<-1<<endl;
						break;
					}
				}
			}
		}	
	return 0;
}