#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n,v,ans = 0;
	cin>>n>>v;
	int f[3050] = {0};
	int r[3050] = {0};
	for (int i = 0; i < n; ++i)
	{
		int a,b;
		cin>>a>>b;
		f[a] +=b;
	}	
	for (int i = 0; i < 3050; ++i)
	{
		int rem = v;
		if (r[i]>0)
		{
			ans+=min(r[i],v);
			rem -= min(r[i],v);
		}	
		ans+=min(f[i],rem);
		r[i+1] +=f[i]-min(f[i],rem);
	}
	cout<<ans<<endl;
	return 0;
}