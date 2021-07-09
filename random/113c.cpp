#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n,x;
	cin>>n>>x;
	vector<int> a;
	for (int i = 0; i < n; ++i)
		{
			int e;
			cin>>e;
			a.pb(e);
		}	
	sort(a.begin(), a.end());
	int ans = 0;
	for (int i = 0; i < a.size(); ++i)
	{
		n = a.size();
		int m = (n+1)/2 - 1;
		if (a[m] != x)
		{
			a.pb(x);
			n++;
			ans++;
			sort(a.begin(), a.end());
		}
		else{
			cout<<ans<<endl;
			break;
		}
	}
	return 0;
}