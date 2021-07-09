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
		int n,k;
		cin>>n>>k;
		string b;
		cin>>b;
		int a[n] = {0};
		int c = 0;
		int m[n] = {0};
		int p = 0;
		while(p<n){
			int f = 0;
			for (int j = p+1; j < min(n,k+p+1); ++j)
			{
				if (b[j] == '1')
				{
					p += j+1;
					f = 1;
				}
			}
			if (f == 0)
			{
				if (b[p] == '0')
				{
					c+=1;
				}
				p+=k+1;
			}
			else{
				c-=1;
			}
		}
		cout<<max(c,0)<<endl;
	}
	return 0;
}		