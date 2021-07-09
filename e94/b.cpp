#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
		{
			ll t1,t2;
			cin>>t1>>t2;
			ll c1,c2;
			cin>>c1>>c2;
			ll ct1,ct2;
			cin>>ct1>>ct2;
			ll tc1 = c1;
			ll tc2 = c2;
			int s = c1*ct1+c2*ct2;
			int ans1 = c1+c2,ans2 = c2+c1;
			while(s>t1){
				c1--;
				s = c1*ct1+c2*ct2;
				if (s<=t1)
				{
					ans1 = c1+c2;
					break;
				}
				c1++;
				c2--;
				s = c1*ct1+c2*ct2;
				if (s<=t1)
				{
					ans1 = c1+c2;
					break;
				}
				c1--;
				ans1 = c1+c2;
				s = c1*ct1+c2*ct2;
				cout<<c1<<" "<<c2<<endl;
			}
			s = c1*ct1+c2*ct2;
			while(s>t2){
				c1--;
				s = c1*ct1+c2*ct2;
				if (s<=t2)
				{
					ans2 = c1+c2;
					break;
				}
				c1++;
				c2--;
				s = c1*ct1+c2*ct2;
				if (s<=t2)
				{
					ans1 = c1+c2;
					break;
				}
				c1--;
				ans2 = c1+c2;
				s = c1*ct1+c2*ct2;
			}
			cout<<ans1<<" "<<ans2<<endl;
		}	
	return 0;
}