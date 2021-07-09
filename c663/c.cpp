#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll M = 1e9+7;
ll modFact(ll n, ll p) 
{ 
    if (n >= p) 
        return 0; 
  
    ll f = 1; 
    ll pw = 1;
    ll ans = 1;
    for (ll i = 1; i <= n; i++){
        f = (f * i); 
    	if(i<n){
  			pw = (pw*2);
  		}
  		ans = (f-pw)%p;
  		f = f%M;
  		pw = pw%M;
  	}
    return ans; 
} 
// ll power(ll x, ll y, ll p)  
// {  
//     ll res = 1;     // Initialize result  
  
//     x = x % p; // Update x if it is more than or  
//                 // equal to p 
   
//     if (x == 0) return 0; // In case x is divisible by p; 
  
//     while (y > 0)  
//     {  
//         // If y is odd, multiply x with result  
//         if (y & 1)  
//             res = (res*x) % p;  
  
//         // y must be even now  
//         y = y>>1; // y = y/2  
//         x = (x*x) % p;  
//     }  
//     return res;  
// }  
int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	ll f = modFact(n,M);
	cout<<f<<endl;
	return 0;
}