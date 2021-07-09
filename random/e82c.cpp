#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	t = 1;
	for (int i = 0; i < t; ++i)
	{
		string s;
		cin>>s;
		int n = s.size();
		int visited[26] = {0};
		int ans[26] = {0};
		ans[s[0]-'a'] = 13;
		visited[s[0]-'a'] = 1;
		for (int i = 1; i < n; ++i)
		{
			
		}
	}	
	return 0;
}		