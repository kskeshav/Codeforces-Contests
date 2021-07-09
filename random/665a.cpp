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
			if (n<=k)
			{
				cout<<k-n<<endl;
			}
			else{
				if ((n-k)%2 != 0)
				{
					cout<<1<<endl;
				}
				else{
					cout<<0<<endl;
				}
			}
		}	
	return 0;
}