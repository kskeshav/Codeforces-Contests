#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll N = 1e6+1;
int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	ll beacons[N] = {0};
	ll present[N] = {0};
	ll destroyed[N] = {0};
	ll md = n+1;
	ll itr = 0;

	for (int i = 0; i < n; ++i)
		{
			ll a,b;
			cin>>a>>b;
			beacons[a] = b;

		}	
	for (int i = 0; i < N; ++i)
	{
		if (beacons[i] != 0)
		{
			present[i] = itr;
			itr+=1;
			ll d = n-itr+(present[i]-present[beacons[i]])+destroyed[i-beacons[i]];
			destroyed[i] = d;
			if (d<md)
			{
				md = d;
			}
		}
		else{
			if (i ==0)
			{
				destroyed[i] = 0;
			}
			else{
				destroyed[i] = destroyed[i-1];
			}
		}
	}
	cout<<md<<endl;
	return 0;
}