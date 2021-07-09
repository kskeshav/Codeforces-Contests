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
			vector<int> a;
			int c = n;
			for (int i = 0; i < n; ++i)
			{
				int e;
				cin>>e;
				a.push_back(e);
			}
			for (int i = 1; i < n-1; ++i)
			{
				if (a[i]>a[i-1] && a[i]<a[i+1])
				{
					a.erase(a.begin() + i);
					i--;
				}
				if (a[i]<a[i-1] && a[i]>a[i+1])
				{
					a.erase(a.begin() + i);
					i--;
				}
			}
			n = a.size();
			cout<<n<<endl;
			for (int i = 0; i < n; ++i)
			{
				if (a[i] != 0)
				{
					cout<<a[i]<<" ";
				}
			}
			cout<<endl;
		}	
	return 0;
}