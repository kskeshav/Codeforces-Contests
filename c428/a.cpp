#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int a[n];
	int g = 0,r = 0,itr = 0;
	for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}	
	for (int i = 0; i < n; ++i)
	{
		g+=min(a[i]+r,8);
		r = max(0,a[i]-g);
		if (g>=k)
		{
			itr = i+1;
			break;
		}
	}
	if (g>=k)
	{
		if (itr == 0)
		{
			cout<<n<<endl;
		}
		else{
			cout<<itr<<endl;
		}
	}
	else{
		cout<<-1<<endl;
	}
	return 0;
}