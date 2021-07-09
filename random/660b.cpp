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
			int x = n/4;
			if (n%4 == 0)
			{
				x-=1;
			}
			for (int i = 0; i < n-x-1; ++i)
			{
				cout<<"9";
			}
			for (int i = 0; i < x+1; ++i)
			{
				cout<<"8";
			}
			cout<<endl;
		}	
	return 0;
}