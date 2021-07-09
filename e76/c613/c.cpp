#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	ll x;
	cin>>x;
	ll a1,a2,ans = 1e12;
	for (ll i = 1; i*i <= x; i++) {
    	if (x % i != 0) continue;
    	ll a = i, b = x / i;
   		if ((a*b) / __gcd(a,b) == x && max(a,b) < ans) {
    		ans = max(a,b);
    		a1 = a, a2 = b;
    	}
  	}
  	cout<<a1<<" "<<a2<<endl;
	return 0;
}