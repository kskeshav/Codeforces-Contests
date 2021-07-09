#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll req[3] = {0};
ll c[3] = {0};
ll p[3] = {0};
ll total = 0;
ll z = 0;
ll N = 1e14+5;
ll binarySearch(ll l,ll r) 
{ 
    if (r > l+1) { 
        ll mid = (l+r)/2;
        ll n = mid;
        ll y = max(z,n*req[0]-c[0])*p[0]+max(z,n*req[1]-c[1])*p[1]+max(z,n*req[2]-c[2])*p[2];
        if (y<=total)
        {
        	return binarySearch(n,r);
        }
        else{
        	return binarySearch(l,n-1);
        }
    }
    else{
    	ll n = r;
    	ll y = max(z,n*req[0]-c[0])*p[0]+max(z,n*req[1]-c[1])*p[1]+max(z,n*req[2]-c[2])*p[2];
    	if (y<=total)
    	{
    		return r;
    	}
    	else{
    		return l;
    	}
    } 
} 

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == 'B')
		{
			req[0]+=1;
		}
		if (s[i] == 'S')
		{
			req[1]+=1;
		}
		if (s[i] == 'C')
		{
			req[2]+=1;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		cin>>c[i];
	}
	for (int i = 0; i < 3; ++i)
	{
		cin>>p[i];
	}
	cin>>total;
	ll ans = binarySearch(0,N);
	cout<<ans<<endl;
	return 0;
}
	


	
