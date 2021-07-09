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
			int n,x,c = 0;
			cin>>n>>x;
			for (int i = 0; i < x; ++i)
			{
				int e;
				cin>>e;
				if (e%2 !=0)
				{
					c++;
				}

			}
			if (c>=x)
			{
				if (x%2 == 0 && n-c == 0)
				{
					cout<<"No"<<endl;
				}
				else{
					cout<<"Yes"<<endl;
				}
			}
			else{
				
				cout<<"No"<<endl;
			}
		}	
	return 0;
}