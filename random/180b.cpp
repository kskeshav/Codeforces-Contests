#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(int argc, char const *argv[])
{
	int t,sx,sy,ex,ey;
	cin>>t>>sx>>sy>>ex>>ey;
	string s;
	cin>>s;
	for (int i = 0; i < t; ++i)
		{
			if (s[i] == 'N' && ey>sy)
			{
				sy++;
			}
			if (s[i] == 'S' && ey<sy)
			{
				sy--;
			}
			if (s[i] == 'E' && ex>sx)
			{
				sx++;
			}
			if (s[i] == 'W' && ex<sx)
			{
				sx--;
			}
			if (sx == ex && sy == ey)
			{
				cout<<i+1<<endl;
				return 0;
			}
		}
	cout<<-1<<endl;
	return 0;
}