#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n,l,r,q1,q2;
	cin>>n>>l>>r>>q1>>q2;
	int w[n];
	for (int i = 0; i < n; ++i)
		{
			cin>>w[i];
		}	
	int litr = 0,ritr = n-1;
	int f1 = 0;
	int f2 = 0;
	int ans = 0;
	
	while(litr <=ritr){
		if (f1)
		{
			if ((w[litr]*l+q1)<w[ritr]*r)
			{
				ans+=w[litr]*l+q1;
				litr+=1;
			}
			else{
				ans+=w[ritr]*r;
				f1 = 0;
				f2 = 1;
				ritr-=1;
			}
		}
		else if (f2)
		{
			if ((w[ritr]*r+q2)<w[litr]*l)
			{
				ans+=w[ritr]*r+q2;
				ritr-=1;
			}
			else{
				ans+=w[litr]*l;
				f1 = 1;
				f2 = 0;
				litr+=1;
			}
		}
		else{
			if (w[litr]*l<=w[ritr]*r)
			{
				ans+=w[litr]*l;
				litr+=1;
				f1 = 1;
			}
			else{
				ans+=w[ritr]*r;
				ritr-=1;
				f2 = 1;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}