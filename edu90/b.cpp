#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int j = 0; j < t; ++j)
		{
			string s;
			cin>>s;
			int f = 0;
			int n = s.size();
			int ans = 0;
			while(f == 0){
				f = 1;
				for (int i = 0; i < n-1; ++i)
				{
					if (s[i] != s[i+1])
					{
						ans+=1;
						s.erase(i,1);
						s.erase(i+1,1);
						f = 0;
					}
				}
			}
			if (!ans%2)
			{
				cout<<"NET"<<endl;
			}
			else{
				cout<<"DA"<<endl;
			}
		}	
	return 0;
}	