#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int a[200005] = {0};
int n = 0;
int rec(int f,int itr){
	if (itr>= n)
	{
		return 0;
	}
	int ans = 0;
	if (f == 0){
		int ans1 = a[itr];
		int ans2 = a[itr]+a[itr+1];
		itr++;
		ans1 += rec(1-f,itr);
		ans2 += rec(1-f,itr+1);
		ans+=min(ans1,ans2);
	}
	else{
		itr++;
		int ans1 = rec(1-f,itr+1);
		int ans2 = rec(1-f,itr);
		ans+=min(ans1,ans2);
	}
	return ans;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
		{
			cin>>n;
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
			int itr=  0;
			int f = 0;
			int ans = 0;
			ans = rec(0,0);
			cout<<ans<<endl;
		}	
	return 0;
}