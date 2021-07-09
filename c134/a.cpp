#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int x[1005] = {0},y[1005] = {0} ;
	int c = 0;
	for (int i = 0; i < n; ++i)
		{
			int a,b;
			cin>>a>>b;
			if (x[a]+y[b] == 2)
			{
				c+=1;
			}
			else{
				c+=x[a]+y[b];
			}
			x[a] = 1;
			y[b] = 1;
		}
	// for (int i = 0; i < 1001; ++i)
	// {
	// 	if (x[i]>0)
	// 	{
	// 		c++;
	// 	}
	// }
	// for (int i = 0; i < 1001; ++i)
	// {
	// 	if (y[i]>1)
	// 	{
	// 		c--;
	// 	}
	// }
	cout<<max(0,n-1-c)<<endl;
	return 0;
}