#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll t,sx,sy,ex,ey;
	cin>>t>>sx>>sy>>ex>>ey;
	int ns = 0,ew = 0;
	char nsd,ewd;
	string d;
	for (int i = 0; i < t; ++i)
	{
		char e;
		cin>>e;
		d.push_back(e);
	}

	if (sx>ex)
	{
		ew = -1;
		ewd = 'W';
	}
	else{
		ew = 1;
		ewd = 'E';
	}
	if (sy>ey)
	{
		ns = -1;
		nsd = 'S';
	}
	else{
		ns = 1;
		nsd = 'N';

	}
	if (sx == ex)
	{
		ew = 0;
	}
	if (sy == ey)
	{
		ns = 0;
	}
	for (ll i = 0; i < t; ++i)
	{
		if (d[i] == nsd)
		{
			sy+=ns;
		}
		if (d[i] == ewd)
		{
			sx+=ew;
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