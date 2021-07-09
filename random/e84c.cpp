#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n,m,k;
	cin>>n>>m>>k;
	for (int i = 0; i < 2*k; ++i)
	{
		int a,b;
		cin>>a>>b;
	}
	cout<<n-1+m-1+(m-1)*n+n-1<<endl;
	for (int i = 0; i < n-1; ++i)
	{
		cout<<"U";
	}
	for (int i = 0; i < m-1; ++i)
	{
		cout<<"L";
	}
	for (int i = 0; i < n; ++i)
	{
		if (i>0)
		{
			cout<<"D";
		}
		if (i%2 == 0)
		{
			for (int i = 0; i < m-1; ++i)
			{
				cout<<"R";
			}
		}
		else{
			for (int i = 0; i < m-1; ++i)
			{
				cout<<"L";
			}
		}
	}
	cout<<endl;
	return 0;
}