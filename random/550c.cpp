#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int n = s.size();
	for (int i = 0; i < n; ++i)
	{
		if ((s[i]-48)%8 == 0)
		{
			cout<<"YES"<<endl;
			cout<<s[i]<<endl;
			return 0;
		}
	}
	for (int i = 0; i <n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				for (int k = j+1; k < n; ++k)
				{
					int x = (s[k]-48)+(s[j]-48)*10+(s[i]-48)*100;
					if (x%8 == 0)
					{
						cout<<"YES"<<endl;
						cout<<x<<endl;
						return 0;

					}
				}
			}
		}
	for (int i = 0; i <n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			int x = (s[j]-48)+(s[i]-48)*10;
			if (x%8 == 0)
			{
				cout<<"YES"<<endl;
				cout<<x<<endl;
				return 0;

			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}