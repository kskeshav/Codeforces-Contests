#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int n,c1 = 1,c2 = 0;
	cin>>n;
	string a,b;
	cin>>a;
	for (int i = 0; i < n-1; ++i)
	{
		string e;
		cin>>e;
		if (e != a)
		{
			b = e;
			c2+=1;
		}
		else{
			c1+=1;
		}
	}
	if (c1>c2)
	{
		cout<<a<<endl;	
	}
	else{
		cout<<b<<endl;
	}
	return 0;
}
