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
			if (n>30)
			{
				cout<<"YES"<<endl;
				if (n-30 == 14 || n-30 == 6 || n-30 == 10)
				{
					cout<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
				}
				else{
					cout<<14<<" "<<10<<" "<<6<<" "<<n-30<<endl;
					}
			}
			else{
				cout<<"NO"<<endl;
			}
		}	
	return 0;
}