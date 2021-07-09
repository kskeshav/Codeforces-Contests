#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	ll n,k1,k2;
	cin>>n>>k1>>k2;
	ll k = k1+k2;
	ll a[n],b[n],c[n];
	ll e = 0;
	ll ea = 0;
	priority_queue<ll> pq;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}	
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
		c[i] = abs(b[i]-a[i]);
		pq.push(c[i]);
	}
	while(k>0){
		ll largest = pq.top();
		pq.pop();
		pq.push(abs(largest-1));
		k--;
	}
	ll ans = 0;
    while(!pq.empty()){
        ll largest = pq.top();
        ans += (largest*largest);
        pq.pop();
    }
    cout<<ans<<endl;
	return 0;
}