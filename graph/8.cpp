#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int visited[27] = {0};
	vector<char> ans;
	string ps,s;
	cin>>ps;
	for (int i = 1; i < n; ++i)
		{
			cin>>s;
			int l = min(ps.size(),s.size());
			for (int i = 0; i < l; ++i)
			{
				if (ps[i] != s[i])
				{
					if (visited[ps[i]]&&visited[s[i]])
					{
						cout<<-1;
					}
					
				}
			}
		}	
	return 0;
}