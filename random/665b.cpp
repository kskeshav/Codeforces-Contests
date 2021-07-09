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
			ll x1,y1,z1,x2,y2,z2;
			cin>>x1>>y1>>z1;
			cin>>x2>>y2>>z2;
			ll x = y1-x2;
			ll y = z2-x1;
			if (x>0 && y>0)
			{
				cout<<(min(z1,y2)-min(x,y))*2<<endl;
			}
			else{
				cout<<min(z1,y2)*2<<endl;
			}
		}	
	return 0;
}