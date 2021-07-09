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
		int n,m;
		cin>>n>>m;
		int a[n];
		int s = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			s+=a[i];
		}
		if (n!=2 && m == n)
		{
			cout<<2*s<<endl;
			for (int i = 1; i < n; ++i)
			{
				cout<<i<<" "<<i+1<<endl;
			}
			cout<<n<<" "<<1<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}	
	return 0;
}