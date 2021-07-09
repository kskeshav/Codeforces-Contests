#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n,s = 0,c1 = 0,c2 = 0;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		int e;
		cin>>e;
		if (e == 100)
		{
			c1+=1;
		}
		else{
			c2+=1;
		}
		s+=e;
	}
	if (s%200 == 0)
	{
		s/=2;
		for (int i = 0; i <= c1; ++i)
		{
			for (int j = 0; j <= c2; ++j)
			{
				if (i*100+j*200 == s)
				{
					cout<<"YES"<<endl;
					return 0;
				}
			}
		}
		cout<<"NO"<<endl;
	}

	else{
		cout<<"NO"<<endl;
	}
	return 0;
}	
