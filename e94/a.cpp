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
			string s;
			cin>>s;
			for (int i = 0; i < n; ++i)
			{
				cout<<s[i+i];
			}
			cout<<endl;
		}	
	return 0;
}