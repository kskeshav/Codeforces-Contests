#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int r,g,b;
	cin>>r>>g>>b;
	int mx = max(r,g);
	mx = max(mx,b);
	int a1[mx] = {0},a2[mx] = {0},a3[mx] = {0};
	for (int i = 0; i < r; ++i)
		{
			cin>>a1[i];
		}	
	for (int i = 0; i < g; ++i)
	{
		cin>>a2[i];
	}
	for (int i = 0; i <b; ++i)
	{
		cin>>a3[i];
	}
	sort(a1,a1+mx);
	sort(a2,a2+mx);
	sort(a3,a3+mx);
	int i1 = mx-1;
	int i2 = mx-1;
	int i3 = mx-1;
	vector<int> v;
	int a[3] = {r,g,b};
	sort(a,a+3);
	int x = a[1]+a[0];
	while(x>=0){
		int mm = min(a1[i1],a2[i2]);
		mm = min(mm,a3[i3]);
		if (mm == a1[i1])
		{
			v.pb(a2[i2]);
			v.pb(a3[i3]);
			i2-=1;
			i3-=1;
		}
		if (mm == a2[i2])
		{
			v.pb(a1[i1]);
			v.pb(a3[i3]);
			i1-=1;
			i3-=1;
		}
		if (mm == a3[i3])
		{
			v.pb(a2[i2]);
			v.pb(a1[i1]);
			i1-=1;
			i2-=1;
		}
		x-=1;
	}
	int m = v.size();
	ll ans = 0;
	for (int i = 0; i < m; i+=2)
	{
		ans+=v[i]*v[i+1];
	}
	cout<<ans<<endl;
	return 0;
}