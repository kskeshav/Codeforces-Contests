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
			int n;
			cin>>n;
			ll a[n];
			int itr = -1;
			int f = 0;
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
				if (a[i]!= 1 && f == 0)
				{
					itr = i;
					f = 1;
				}
			}
			if (itr == -1)
			{
				itr = n+1;
			}
			if (itr%2 == 0)
			{
				cout<<"First"<<endl;
			}
			else{
				cout<<"Second"<<endl;
			}

		}	
	return 0;
}