#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9+7;

int main(int argc, char const *argv[])
{
	ll l,r;
	cin>>l>>r;
	vector<ll> next;
	ll n1 = 4;
	ll n2 = 7;
	next.push_back(n1);
	next.push_back(n2);
	for (int i = 0; i < next.size(); ++i)
	{
		if (next[i]>inf)
		{
			break;
		}
		next.push_back(next[i]*10+4);
		next.push_back(next[i]*10+7);		
	}
	ll n = next.size();
	sort(next.begin(),next.end());
	ll s = 0;
	int m = lower_bound(next.begin(), next.end(),l)-next.begin();
	ll i = l;
	while(i<=r){
		if (next[m]>=i)
		{	
			s += (min(next[m],r)-i+1)*next[m];
			i = next[m]+1;
		}
		else{
			m+=1;
		}
	}
	cout<<s<<endl;
	return 0;
}	