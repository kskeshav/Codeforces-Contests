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
			int a[n];
			int s[101] = {0};
			for (int i = 0; i < n; ++i)
			{
				cin>>a[i];
			}
			int ms = 0;
			int visited[51] = {0};
			for (int i = 0; i < 101; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					for (int k = j+1; k < n; ++k)
					{
						if (!visited[j] && !visited[k] && a[j]+a[k] == i)
						{
							s[i]++;
							visited[j] = 1;
							visited[k] = 1;
						}
					}
				}
				if (ms<s[i])
				{
					ms = s[i];
				}
				for (int i = 0; i < 51; ++i)
				{
					visited[i] = 0;
				}
			}
			cout<<ms<<endl;
		}	
	return 0;
}