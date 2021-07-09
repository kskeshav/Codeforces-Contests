#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int k = 0; k < t; ++k)
	{
		string s;
		cin>>s;
		int n;
		n = s.size();
		vector<int> v;
		int i = 0;
		while(i<n)
		{
			if (s[i] == '1')
			{
				int j = i;
				for (j = i; j < n; ++j)
				{
					if (s[j] == '0')
					{
						break;
					}
				}
				v.pb(j-i);
				i = j;
			}
			else{
				i+=1;
			}
		}
		sort(v.begin(), v.end());
		int m = v.size();
		int ans = 0;
		for (i = m-1; i >=0; i-=2)
		{
			ans+=v[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}