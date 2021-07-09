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
			ll n,k;
			cin>>n>>k;
			int a[n];
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
			int maxe = 0;
			for (int i = 0; i < n; ++i)
			{
				maxe = max(maxe,a[i]);
			}
			if ((maxe*n)<k)
			{
				cout<<-1<<endl;
				continue;

			}
			int ans = 0;
			for (int i = 0; i < k; ++i)
			{	
				int curr = -1;
				for (int j = 0; j < n-1; ++j)
				{
					if (a[j]<a[j+1])
					{
						a[j]++;
						curr = j;
						break;
					}
				}
				ans = curr;
				if (curr == -1)
				{
					break;
				}

			}
			if (ans == -1)
			{
				cout<<-1<<endl;
				continue;
			}
			cout<<ans+1<<endl;
		}	

	return 0;
}