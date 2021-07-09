#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    ll ans = 0; 
    unordered_map<ll, vector<ll> > map;  
    ll sum = 0;   
    ll itr = -1;
    map[0].pb(0);
    for (int i = 0; i < n; i++) 
    { 
        sum += a[i];
        if (map.find(sum) != map.end()) 
        {
            ll s = map[sum].size();
            ll x = map[sum][s-1]+2;
            if (itr<=x)
            {
                ans+=1;
            }
            itr = i;
        }
        map[sum].pb(i); 
    }
    cout<<ans<<endl;
    return 0;
}