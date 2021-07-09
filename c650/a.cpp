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
		string b;
		cin>>b;
		int n = b.size();
		for (int i = 0; i < b.size()-1; ++i)
		{
			if (b[i] != b[i+1])
			{
				cout<<b[i];

			}
			else{
				cout<<b[i];
				i+=1;
			}
		}
		cout<<b[n-1]<<endl;
	}
	return 0;
}		