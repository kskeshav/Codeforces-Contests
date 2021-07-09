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
			int n,f = 0;
			cin>>n;
			int a[n],b[n];
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
			for (int i = 0; i < n; ++i)
			{
				cin>>b[i];
			}
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n-1; ++j)
				{
					if (a[j]>a[j+1]){
						if(b[j] == b[j+1])
						{
							f = 1;
							break;
						}
						else{
							int t = a[j];
							a[j] = a[j+1];
							a[j+1] = t;
							b[j] = 1-b[j];
							b[j+1] = 1-b[j+1];
						}
					}
				}
				if (f == 1)
				{
					break;
				}
			}
			if (f == 1)
			{
				cout<<"No"<<endl;
			}
			else{
				cout<<"Yes"<<endl;
			}
		}	
	return 0;
}