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
			int n,m,k;
			cin>>n>>m>>k;
			int x = min(n/k,m);
			int l = m-x;
			int b = l/(k-1);
			if (l%(k-1)>0)
			{
				b++;
			}
			cout<<x-b<<endl;
		}	
	return 0;
}