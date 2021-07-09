#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int n,d,pc = 0,c = 0,ans = 0,j = 0;
	cin>>n>>d;
	string s;
	cin>>s;
	while(c<n){
		if (c+d+2>n)
		{
			c = n;
			ans+=1;
			continue;	
		}
		j = c+1;
		for (int i = j; i < j+d; ++i)
		{
			if (s[i] == '1')
			{
				c = i;
			}
		}
		if (c == pc)
		{
			cout<<-1<<endl;
			return 0;
		}
		else{
			ans+=1;
			pc = c;
		}
	}
	cout<<ans<<endl;
	return 0;
}	